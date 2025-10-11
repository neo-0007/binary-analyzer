
/* WARNING: Type propagation algorithm not settling */

int FUN_00411bb0(int *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  if (param_1 == (int *)0x0) {
LAB_00411cf0:
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/pmeth_gn.c",0x59,"gen_init");
    iVar3 = -2;
    FUN_0051f8f0(6,0x96,0);
    bVar2 = true;
  }
  else {
    FUN_00412da0();
    lVar4 = *(long *)(param_1 + 8);
    *param_1 = param_2;
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x60) != 0)) {
      if (param_2 == 2) {
        lVar4 = FUN_0053e7f0(lVar4,0x84,0);
        *(long *)(param_1 + 10) = lVar4;
      }
      else if (param_2 == 4) {
        lVar4 = FUN_0053e7f0(lVar4,3,0);
        *(long *)(param_1 + 10) = lVar4;
      }
      else {
        lVar4 = *(long *)(param_1 + 10);
      }
      if (lVar4 != 0) {
        return 1;
      }
      FUN_0051f420();
      iVar3 = 0;
      FUN_0051f540("../crypto/evp/pmeth_gn.c",0x34,"gen_init");
      FUN_0051f8f0(6,0x86,0);
      goto LAB_00411c5f;
    }
    lVar4 = *(long *)(param_1 + 0x1e);
    if (lVar4 == 0) goto LAB_00411cf0;
    if (param_2 == 2) {
      if (*(long *)(lVar4 + 0x28) == 0) goto LAB_00411cf0;
      pcVar1 = *(code **)(lVar4 + 0x20);
    }
    else {
      if (param_2 != 4) {
        return 1;
      }
      if (*(long *)(lVar4 + 0x38) == 0) goto LAB_00411cf0;
      pcVar1 = *(code **)(lVar4 + 0x30);
    }
    if (pcVar1 == (code *)0x0) {
      return 1;
    }
    iVar3 = (*pcVar1)(param_1);
    bVar2 = iVar3 < 1;
  }
  if ((param_1 == (int *)0x0) || (!bVar2)) {
    return iVar3;
  }
LAB_00411c5f:
  FUN_00412da0(param_1);
  *param_1 = 0;
  return iVar3;
}

