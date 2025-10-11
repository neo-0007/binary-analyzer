
EC_GROUP * EC_GROUP_new(EC_METHOD *meth)

{
  EC_GROUP *pEVar1;
  
  pEVar1 = (EC_GROUP *)ossl_ec_group_new_ex(0,0,meth);
  return pEVar1;
}

