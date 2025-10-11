
undefined8
bytepad(undefined1 *param_1,long *param_2,void *param_3,size_t param_4,void *param_5,size_t param_6,
       ulong param_7)

{
  void *pvVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (undefined1 *)0x0) {
    if (param_2 != (long *)0x0) {
      if (param_5 == (void *)0x0) {
        param_6 = 0;
      }
      *param_2 = (((param_7 - 1) + (long)((int)param_4 + 2 + (int)param_6)) / param_7) * param_7;
      return 1;
    }
    ERR_new();
    ERR_set_debug("../providers/implementations/macs/kmac_prov.c",0x222,"bytepad");
    ERR_set_error(0x39,0xc0102,0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (param_7 < 0x100) {
      *param_1 = 1;
      param_1[1] = (char)param_7;
      pvVar1 = memcpy(param_1 + 2,param_3,param_4);
      pvVar1 = (void *)((long)pvVar1 + param_4);
      if ((param_5 != (void *)0x0) && (param_6 != 0)) {
        pvVar1 = memcpy(pvVar1,param_5,param_6);
        pvVar1 = (void *)((long)pvVar1 + param_6);
      }
      iVar3 = (int)pvVar1 - (int)param_1;
      iVar4 = (int)param_7 * (int)(((param_7 - 1) + (long)iVar3) / param_7);
      if (iVar3 != iVar4) {
        memset(pvVar1,0,(long)(iVar4 - iVar3));
      }
      uVar2 = 1;
      if (param_2 != (long *)0x0) {
        *param_2 = (long)iVar4;
        return uVar2;
      }
    }
  }
  return uVar2;
}

