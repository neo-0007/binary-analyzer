
long * FUN_00611710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long *local_40;
  
  iVar4 = 0;
  local_40 = (long *)FUN_006116d0();
  if (local_40 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_pcons.c",0x40,"v2i_POLICY_CONSTRAINTS");
    FUN_0051f8f0(0x22,0xc0100,0);
  }
  else {
    for (; iVar2 = FUN_00436480(param_3), iVar4 < iVar2; iVar4 = iVar4 + 1) {
      lVar3 = FUN_004364a0(param_3,iVar4);
      uVar1 = *(undefined8 *)(lVar3 + 8);
      iVar2 = thunk_FUN_00712780(uVar1,"requireExplicitPolicy");
      if (iVar2 == 0) {
        iVar2 = FUN_0059d4a0(lVar3,local_40);
      }
      else {
        iVar2 = thunk_FUN_00712780(uVar1,"inhibitPolicyMapping");
        if (iVar2 != 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/v3_pcons.c",0x4c,"v2i_POLICY_CONSTRAINTS");
          FUN_0051f8f0(0x22,0x6a,&DAT_007e3d61,*(undefined8 *)(lVar3 + 8));
          goto LAB_006117c0;
        }
        iVar2 = FUN_0059d4a0(lVar3,local_40 + 1);
      }
      if (iVar2 == 0) goto LAB_006117c0;
    }
    if ((local_40[1] == 0) && (*local_40 == 0)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_pcons.c",0x53,"v2i_POLICY_CONSTRAINTS");
      FUN_0051f8f0(0x22,0x97,0);
LAB_006117c0:
      FUN_006116f0(local_40);
      local_40 = (long *)0x0;
    }
  }
  return local_40;
}

