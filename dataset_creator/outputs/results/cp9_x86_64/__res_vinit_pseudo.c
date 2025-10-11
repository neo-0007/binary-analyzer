
undefined4 __res_vinit(int *param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  long lVar3;
  
  if ((param_2 == 0) ||
     ((((*param_1 == 0 || (*param_1 == 5)) && ((param_1[1] & 0xfffffffdU) == 0)) &&
      ((*(ulong *)(param_1 + 2) == 0 || ((*(ulong *)(param_1 + 2) & 0xfffffffffffffffe) == 0x2c0))))
     )) {
    lVar3 = __resolv_conf_get_current();
  }
  else {
    lVar3 = __resolv_conf_load(param_1,0);
  }
  if (lVar3 != 0) {
    cVar1 = __resolv_conf_attach(param_1,lVar3);
    __resolv_conf_put(lVar3);
    if (cVar1 != '\0') {
      if (param_2 == 0) {
        return 0;
      }
      uVar2 = __res_randomid();
      *(undefined2 *)(param_1 + 0x11) = uVar2;
      return 0;
    }
  }
  return 0xffffffff;
}

