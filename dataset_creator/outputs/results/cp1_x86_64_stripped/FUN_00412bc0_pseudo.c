
ulong FUN_00412bc0(uint *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                  undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((*(long *)(param_1 + 0x1e) == 0) || (*(long *)(*(long *)(param_1 + 0x1e) + 0xf8) == 0)) {
    if (*param_1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/pmeth_lib.c",0x510,"evp_pkey_ctx_ctrl_int");
      FUN_0051f8f0(6,0x95,0);
      return 0xffffffff;
    }
    if ((param_3 != 0xffffffff) && ((*param_1 & param_3) == 0)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/pmeth_lib.c",0x515,"evp_pkey_ctx_ctrl_int");
      FUN_0051f8f0(6,0x94,0);
      return 0xffffffff;
    }
  }
  iVar2 = FUN_00412830(param_1);
  if (iVar2 < 2) {
    if (-1 < iVar2) {
      piVar1 = *(int **)(param_1 + 0x1e);
      if ((piVar1 == (int *)0x0) || (*(code **)(piVar1 + 0x30) == (code *)0x0)) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/pmeth_lib.c",0x520,"evp_pkey_ctx_ctrl_int");
        FUN_0051f8f0(6,0x93,0);
        return 0xfffffffe;
      }
      if ((param_2 != -1) && (*piVar1 != param_2)) {
        return 0xffffffff;
      }
      uVar3 = (**(code **)(piVar1 + 0x30))(param_1,param_4,param_5,param_6);
      if (uVar3 != 0xfffffffe) {
        return (ulong)uVar3;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/pmeth_lib.c",0x529,"evp_pkey_ctx_ctrl_int");
      FUN_0051f8f0(6,0x93,0);
      return (ulong)uVar3;
    }
  }
  else if (iVar2 == 2) {
    uVar4 = FUN_00524e00(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar4;
  }
  return 0;
}

