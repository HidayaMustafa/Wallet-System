#pragma once

#include "Date.hpp"  

enum class Categories {
    FOOD,
    CLOTHES,
    SHOES,
    ELECTRONICS,
    MISCELLANEOUS,
    NONE
};

enum class TransactionType {
    DEPOSIT,
    WITHDRAW
};

class Transaction {
private:
    int id;
    double amount;
    Categories category;  
    TransactionType type;
    Date date;

public:
    Transaction(double num, Categories cat, TransactionType t);
    virtual ~Transaction();
    double getAmount() const;
    void setAmount(double amt);
    
    int getTranId() const;
    void setTranId(int ID) ;

    Categories getCategory() const;
    void setCategory(Categories cat);

    Date getDate() const;
    void updateDate();

    TransactionType getTransactionType() const;
    void setTransactionType(TransactionType t);

    const char *printCategory(Categories category) const;
    const char *printType(TransactionType type) const;
};
