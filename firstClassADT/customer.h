#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <stdlib.h>
#include "address.h"
#include "order.h"


typedef struct Customer
{
  char* name;
  Address address;
  size_t noOfOrders;
  Order orders[42];
}Customer;

typedef struct Customer* CustomerPtr;

/**
 * @brief      Creates a customer.
 * @param      name     The name
 * @param      address  The address
 * @return     Handle 
 */
CustomerPtr createCustomer(
	char* name,
	Address address);

/**
 * @brief      De alloc the handle customer
 * @param      customer  Pointer to be de-alloc
 */
void destroyCustomer(
	CustomerPtr customer);


#endif