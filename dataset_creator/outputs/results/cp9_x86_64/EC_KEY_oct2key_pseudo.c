
undefined8 EC_KEY_oct2key(long param_1,byte *param_2,size_t param_3,BN_CTX *param_4)

{
  int iVar1;
  EC_POINT *p;
  EC_GROUP *group;
  
  if (param_1 == 0) {
    return 0;
  }
  group = *(EC_GROUP **)(param_1 + 0x18);
  if (group != (EC_GROUP *)0x0) {
    p = *(EC_POINT **)(param_1 + 0x20);
    if (p == (EC_POINT *)0x0) {
      p = EC_POINT_new(group);
      *(EC_POINT **)(param_1 + 0x20) = p;
      if (p == (EC_POINT *)0x0) {
        return 0;
      }
      group = *(EC_GROUP **)(param_1 + 0x18);
    }
    iVar1 = EC_POINT_oct2point(group,p,param_2,param_3,param_4);
    if (iVar1 != 0) {
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
      if ((*(byte *)**(undefined8 **)(param_1 + 0x18) & 2) == 0) {
        *(uint *)(param_1 + 0x34) = *param_2 & 0xfffffffe;
        return 1;
      }
      return 1;
    }
  }
  return 0;
}

