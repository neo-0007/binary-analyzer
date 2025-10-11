
long FUN_00474520(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0043b840();
  if ((iVar1 != 0) && (param_1 != (undefined8 *)0x0)) {
    lVar2 = FUN_004743a0(*param_1,0);
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1e9,"mac_gen");
      FUN_0051f8f0(0x39,0xc0100,0);
    }
    else if ((*(byte *)(param_1 + 1) & 3) != 0) {
      if (param_1[2] == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1f2,"mac_gen");
        FUN_0051f8f0(0x39,0x9e,0);
        FUN_00474480(lVar2);
        lVar2 = 0;
      }
      else {
        iVar1 = FUN_0043c440(lVar2 + 0x28,param_1 + 4);
        if (iVar1 == 0) {
          FUN_00474480(lVar2);
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1ff,"mac_gen");
          FUN_0051f8f0(0x39,0xc0103,0);
          lVar2 = 0;
        }
        else {
          FUN_0043c400(param_1 + 4);
          *(undefined8 *)(lVar2 + 0x18) = param_1[2];
          *(undefined8 *)(lVar2 + 0x20) = param_1[3];
          param_1[3] = 0;
          param_1[2] = 0;
        }
      }
    }
    return lVar2;
  }
  return 0;
}

