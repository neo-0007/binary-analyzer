
int EC_KEY_set_public_key(EC_KEY *key,EC_POINT *pub)

{
  int iVar1;
  EC_POINT *pEVar2;
  
  if ((*(code **)(*(long *)key + 0x38) != (code *)0x0) &&
     (iVar1 = (**(code **)(*(long *)key + 0x38))(), iVar1 == 0)) {
    return 0;
  }
  EC_POINT_free(*(EC_POINT **)(key + 0x20));
  pEVar2 = EC_POINT_dup(pub,*(EC_GROUP **)(key + 0x18));
  *(long *)(key + 0x68) = *(long *)(key + 0x68) + 1;
  *(EC_POINT **)(key + 0x20) = pEVar2;
  return (uint)(pEVar2 != (EC_POINT *)0x0);
}

