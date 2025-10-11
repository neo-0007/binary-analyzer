
long * FUN_0061b780(long param_1,long param_2,long param_3,ulong *param_4,int param_5)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((param_4[1] != 0) && (param_4[1] <= *param_4)) {
    return (long *)0x0;
  }
  plVar2 = (long *)FUN_0041aec0(0x18,"../crypto/x509/pcy_node.c",0x47);
  if (plVar2 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/pcy_node.c",0x49,"ossl_policy_level_add_node");
    FUN_0051f8f0(0x22,0xc0100,0);
    return (long *)0x0;
  }
  *plVar2 = param_2;
  plVar2[1] = param_3;
  if (param_1 == 0) {
joined_r0x0061b869:
    if (param_5 != 0) {
      uVar3 = param_4[4];
      if (uVar3 == 0) {
        uVar3 = FUN_00436410();
        param_4[4] = uVar3;
        if (uVar3 == 0) {
          FUN_0051f420(0);
          uVar5 = 0x66;
          goto LAB_0061b881;
        }
      }
      iVar1 = FUN_00435f80(uVar3,param_2);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar5 = 0x6a;
        goto LAB_0061b881;
      }
    }
    *param_4 = *param_4 + 1;
    plVar6 = plVar2;
    if (param_3 != 0) {
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
    }
  }
  else {
    iVar1 = FUN_00423da0(*(undefined8 *)(param_2 + 8));
    if (iVar1 == 0x2ea) {
      if (*(long *)(param_1 + 0x10) == 0) {
        *(long **)(param_1 + 0x10) = plVar2;
        goto joined_r0x0061b869;
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 8);
      if (lVar4 == 0) {
        lVar4 = FUN_0061b670();
        *(long *)(param_1 + 8) = lVar4;
        if (lVar4 != 0) goto LAB_0061b803;
        FUN_0051f420(0);
        uVar5 = 0x58;
      }
      else {
LAB_0061b803:
        iVar1 = FUN_00435f80(lVar4,plVar2);
        if (iVar1 != 0) goto joined_r0x0061b869;
        FUN_0051f420();
        uVar5 = 0x5c;
      }
LAB_0061b881:
      FUN_0051f540("../crypto/x509/pcy_node.c",uVar5,"ossl_policy_level_add_node");
      FUN_0051f8f0(0x22,0xc0100,0);
    }
    plVar6 = (long *)0x0;
    FUN_0061b760(plVar2);
  }
  return plVar6;
}

