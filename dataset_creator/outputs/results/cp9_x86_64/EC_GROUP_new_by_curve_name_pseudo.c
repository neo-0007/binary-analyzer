
EC_GROUP * EC_GROUP_new_by_curve_name(int nid)

{
  EC_GROUP *pEVar1;
  
  pEVar1 = (EC_GROUP *)EC_GROUP_new_by_curve_name_ex(0,0,nid);
  return pEVar1;
}

