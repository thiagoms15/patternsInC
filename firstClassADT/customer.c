#include "customer.h"

CustomerPtr createCustomer(
  char* name,
  Address address)
{
  CustomerPtr customer = malloc(sizeof *customer);

  if(customer)
  {
    customer->name    = name;
    customer->address = address;
  }
  return customer;
}

void destroyCustomer(CustomerPtr customer)
{
  free(customer);
}