
undefined4 FUN_005fd710(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  iVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = FUN_004cdb50();
  lVar4 = FUN_004cca80(param_2,uVar3);
  if (lVar4 == 0) {
    FUN_0051f420();
    uVar8 = 0;
    FUN_0051f540("../crypto/evp/evp_cnf.c",0x21,"alg_module_init");
    FUN_0051f8f0(6,0xa5,0);
  }
  else {
    while( true ) {
      iVar2 = FUN_00436480(lVar4);
      if (iVar2 <= iVar7) break;
      lVar6 = FUN_004364a0(lVar4,iVar7);
      uVar3 = *(undefined8 *)(lVar6 + 8);
      iVar2 = thunk_FUN_00712780(uVar3,"fips_mode");
      if (iVar2 != 0) {
        iVar2 = thunk_FUN_00712780(uVar3,"default_properties");
        if (iVar2 == 0) {
          uVar3 = *(undefined8 *)(lVar6 + 0x10);
          uVar5 = FUN_004cc770(param_2);
          iVar2 = FUN_00408cf0(uVar5,uVar3,0,0);
          if (iVar2 != 0) goto LAB_005fd7a2;
          FUN_0051f420();
          uVar3 = 0x39;
LAB_005fd823:
          uVar8 = 0;
          FUN_0051f540("../crypto/evp/evp_cnf.c",uVar3,"alg_module_init");
          FUN_0051f8f0(6,0xd1,0);
        }
        else {
          FUN_0051f420();
          uVar8 = 0;
          FUN_0051f540("../crypto/evp/evp_cnf.c",0x3d,"alg_module_init");
          FUN_0051f8f0(6,0xa9,"name=%s, value=%s",*(undefined8 *)(lVar6 + 8),
                       *(undefined8 *)(lVar6 + 0x10));
        }
        goto LAB_005fd842;
      }
      iVar2 = FUN_0059d2f0(lVar6,&local_44);
      uVar8 = 0;
      if (iVar2 == 0) goto LAB_005fd842;
      bVar1 = 0 < local_44;
      uVar3 = FUN_004cc770(param_2);
      iVar2 = FUN_00408e00(uVar3,bVar1,0);
      if (iVar2 == 0) {
        FUN_0051f420();
        uVar3 = 0x33;
        goto LAB_005fd823;
      }
LAB_005fd7a2:
      iVar7 = iVar7 + 1;
    }
    uVar8 = 1;
  }
LAB_005fd842:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

