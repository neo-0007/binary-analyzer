
undefined4
FUN_005c00e0(long param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,long *param_7)

{
  long lVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 < 3) {
    if (-1 < param_4) {
      if (param_4 != 1) goto LAB_005c0185;
      uVar6 = thunk_FUN_007129d0();
      lVar7 = FUN_0041aec0(0x30,"../crypto/bio/bio_addr.c",0x245);
      *param_7 = lVar7;
      if (lVar7 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/bio/bio_addr.c",0x246,"addrinfo_wrap");
        FUN_0051f8f0(0x20,0xc0100,0);
      }
      else {
        *(undefined4 *)(lVar7 + 4) = 1;
        *(undefined4 *)(lVar7 + 8) = param_5;
        *(undefined4 *)(lVar7 + 0xc) = 0;
        lVar7 = FUN_005bf560();
        if (lVar7 != 0) {
          FUN_005bf6e0(lVar7,1,param_1,uVar6,0);
          lVar1 = *param_7;
          uVar6 = FUN_005bf8e0(lVar7);
          *(undefined8 *)(lVar1 + 0x18) = uVar6;
        }
        uVar9 = 1;
        *(undefined8 *)(*param_7 + 0x28) = 0;
        if (*(long *)(*param_7 + 0x18) != 0) goto LAB_005c0155;
        FUN_005bfdd0();
        *param_7 = 0;
      }
      FUN_0051f420();
      uVar6 = 0x2a7;
LAB_005c026f:
      FUN_0051f540("../crypto/bio/bio_addr.c",uVar6,"BIO_lookup_ex");
      uVar9 = 0;
      FUN_0051f8f0(0x20,0xc0100,0);
      goto LAB_005c0155;
    }
  }
  else if (param_4 == 10) {
LAB_005c0185:
    iVar4 = FUN_004aec60();
    if (iVar4 != 1) {
      uVar9 = 0;
      goto LAB_005c0155;
    }
    local_68 = (undefined1  [16])0x0;
    auVar2._4_4_ = param_5;
    auVar2._0_4_ = param_4;
    auVar2._8_4_ = param_6;
    auVar3._12_4_ = 0;
    auVar3._0_12_ = auVar2;
    local_78 = auVar3 << 0x20;
    local_58 = (undefined1  [16])0x0;
    if ((param_1 != 0) && (param_4 == 0)) {
      local_78._4_12_ = auVar2;
      local_78._0_4_ = 0x20;
    }
    if (param_3 == 1) {
      local_78._0_4_ = local_78._0_4_ | 1;
    }
    iVar4 = 0;
    while( true ) {
      iVar5 = FUN_0076b060(param_1,param_2,local_78,param_7);
      if (iVar5 == -10) break;
      uVar9 = 1;
      if (iVar5 == 0) goto LAB_005c0155;
      if (iVar5 == -0xb) {
        FUN_0051f420();
        FUN_0051f540("../crypto/bio/bio_addr.c",0x2cc,"BIO_lookup_ex");
        puVar8 = (undefined4 *)FUN_006d2700();
        FUN_0051f8f0(2,*puVar8,"calling getaddrinfo()");
        FUN_0051f420();
        FUN_0051f540("../crypto/bio/bio_addr.c",0x2ce,"BIO_lookup_ex");
        uVar6 = 0;
LAB_005c0350:
        uVar9 = 0;
        FUN_0051f8f0(0x20,0x80002,uVar6);
        goto LAB_005c0155;
      }
      if ((local_78 & (undefined1  [16])0x20) == (undefined1  [16])0x0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/bio/bio_addr.c",0x2e2,"BIO_lookup_ex");
        if (iVar4 == 0) {
          iVar4 = iVar5;
        }
        uVar6 = FUN_0076d630(iVar4);
        goto LAB_005c0350;
      }
      local_78._0_4_ = local_78._0_4_ & 0xffffffdf | 4;
      iVar4 = iVar5;
    }
    FUN_0051f420();
    uVar6 = 0x2d3;
    goto LAB_005c026f;
  }
  FUN_0051f420();
  uVar9 = 0;
  FUN_0051f540("../crypto/bio/bio_addr.c",0x29e,"BIO_lookup_ex");
  FUN_0051f8f0(0x20,0x83,0);
LAB_005c0155:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

