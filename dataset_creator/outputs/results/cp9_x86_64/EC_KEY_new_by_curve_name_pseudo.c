
EC_KEY * EC_KEY_new_by_curve_name(int nid)

{
  EC_KEY *pEVar1;
  
  pEVar1 = (EC_KEY *)EC_KEY_new_by_curve_name_ex(0,0,nid);
  return pEVar1;
}

