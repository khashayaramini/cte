#ifndef CTE_ORDERBOOK_H
#define CTE_ORDERBOOK_H

#include <atomic>

struct agent_orderbook_s
{
    int32_t                 orderbook_id;
    std::atomic<int32_t>    best_bid_price;
    std::atomic<int32_t>    best_ask_price;
    std::atomic<int32_t>    best_bid_quantity;
    std::atomic<int32_t>    best_ask_quantity;
};

#endif
