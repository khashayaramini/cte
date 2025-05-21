#ifndef CTE_AGENT_H
#define CTE_AGENT_H

#include "../shared/orderbook.h"

struct cte_agent_params_s;

struct cte_agent_s
{
    int                         agent_id;
    int                         agent_type;
    int                         agent_state;
    struct cte_agent_params_s   *agent_params;
};

void cte_agent_init(struct cte_agent_s *agent_data);
void cte_agent_start(struct cte_agent_s *agent_data, struct agent_orderbook_s *agent_orderbook);
void cte_agent_start(struct cte_agent_s *agent_data, ...);
void cte_agent_stop(struct cte_agent_s *agent_data);
void cte_agent_edit(struct cte_agent_s *agent_data);
void cte_agent_run(struct cte_agent_s *agent_data, struct agent_orderbook_s *agent_orderbook);
void cte_agent_run(struct cte_agent_s *agent_data, ...);
void cte_agent_trigger(struct cte_agent_s *agent_data, struct agent_orderbook_s *agent_orderbook);
void cte_agent_trigger(struct cte_agent_s *agent_data, ...);

#endif
