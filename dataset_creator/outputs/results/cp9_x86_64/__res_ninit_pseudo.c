
int __res_ninit(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = __resolv_conf_get_current();
  if (lVar3 == 0) {
    iVar2 = -1;
  }
  else {
    uVar1 = __resolv_conf_attach(param_1,lVar3);
    __resolv_conf_put(lVar3);
    iVar2 = (uVar1 & 0xff) - 1;
  }
  return iVar2;
}

