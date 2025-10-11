
ulong FUN_0049e110(undefined8 param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  bool bVar14;
  ulong local_78;
  int local_58;
  undefined1 local_54 [4];
  long local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = FUN_004c4f60();
  if (lVar5 != 0) {
    uVar8 = 0;
    uVar6 = 0;
    iVar12 = 0;
    FUN_0051f000();
LAB_0049e1af:
    uVar11 = uVar8 - uVar6;
    if (8 < uVar11) goto LAB_0049e28d;
LAB_0049e1bf:
    if ((uVar8 <= uVar6 + 8) && (lVar7 = FUN_004c5190(lVar5), lVar7 != 0)) {
      iVar1 = FUN_004ab770(param_1,*(long *)(lVar5 + 8) + uVar8,(uVar6 + 8) - uVar8 & 0xffffffff);
      if ((iVar1 < 0) && (uVar11 == 0)) {
        FUN_0051f420();
        uVar10 = 0x8e;
LAB_0049e361:
        FUN_0051f540("../crypto/asn1/a_d2i_fp.c",uVar10,"asn1_d2i_read_bio");
        FUN_0051f8f0(0xd,0x8e,0);
        goto LAB_0049e380;
      }
      if (0 < iVar1) {
        bVar14 = CARRY8((long)iVar1,uVar8);
        uVar8 = (long)iVar1 + uVar8;
        if (bVar14) {
          FUN_0051f420();
          uVar10 = 0x93;
          goto LAB_0049e50f;
        }
        uVar11 = uVar8 - uVar6;
      }
      lVar7 = *(long *)(lVar5 + 8) + uVar6;
      local_50 = lVar7;
      if (uVar11 != 0) goto LAB_0049e239;
      goto LAB_0049e380;
    }
    FUN_0051f420();
    uVar10 = 0x89;
    goto LAB_0049e479;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/asn1/a_d2i_fp.c",0x7e,"asn1_d2i_read_bio");
  FUN_0051f8f0(0xd,0xc0100,0);
  uVar6 = 0xffffffff;
LAB_0049e179:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
LAB_0049e239:
  while( true ) {
    local_50 = lVar7;
    uVar2 = FUN_004a1ba0(&local_50,&local_48,&local_58,local_54);
    if ((uVar2 & 0x80) != 0) {
      uVar3 = FUN_0051e9f0();
      uVar4 = uVar3 & 0x7fffffff;
      if ((uVar3 & 0x80000000) == 0) {
        uVar4 = uVar3 & 0x7fffff;
      }
      if (uVar4 != 0x9b) goto LAB_0049e380;
      FUN_0051f050();
    }
    uVar6 = uVar6 + (long)((int)local_50 - (int)lVar7);
    if ((uVar2 & 1) == 0) {
      if ((iVar12 != 0) && (local_48 == 0)) {
        if ((local_58 != 0) || (iVar12 = iVar12 + -1, iVar12 != 0)) goto LAB_0049e1af;
        goto LAB_0049e2c5;
      }
      if (local_48 <= uVar8 - uVar6) goto LAB_0049e2f7;
      uVar11 = (uVar6 + local_48) - uVar8;
      if ((uVar11 < 0x80000000) && (uVar8 <= uVar6 + local_48)) {
        local_78 = 0x4000;
        goto joined_r0x0049e3d2;
      }
      FUN_0051f420();
      uVar10 = 0xc4;
      goto LAB_0049e50f;
    }
    if (iVar12 == -1) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_d2i_fp.c",0xaf,"asn1_d2i_read_bio");
      FUN_0051f8f0(0xd,0x7b,0);
      goto LAB_0049e380;
    }
    iVar12 = iVar12 + 1;
    uVar11 = uVar8 - uVar6;
    if (uVar11 < 9) break;
LAB_0049e28d:
    lVar7 = *(long *)(lVar5 + 8) + uVar6;
  }
  goto LAB_0049e1bf;
joined_r0x0049e3d2:
  if (uVar11 != 0) {
    uVar9 = uVar11;
    if (local_78 <= uVar11) {
      uVar9 = local_78;
    }
    lVar7 = FUN_004c5190(lVar5,uVar9 + uVar8);
    uVar13 = uVar9;
    if (lVar7 != 0) goto LAB_0049e410;
    FUN_0051f420();
    uVar10 = 0xd1;
LAB_0049e479:
    FUN_0051f540("../crypto/asn1/a_d2i_fp.c",uVar10,"asn1_d2i_read_bio");
    FUN_0051f8f0(0xd,0xc0100,0);
    goto LAB_0049e380;
  }
LAB_0049e2f7:
  bVar14 = CARRY8(local_48,uVar6);
  uVar6 = local_48 + uVar6;
  if (bVar14) {
    FUN_0051f420();
    uVar10 = 0xe7;
    goto LAB_0049e50f;
  }
  if (iVar12 == 0) goto LAB_0049e2c5;
  goto LAB_0049e1af;
LAB_0049e2c5:
  if (uVar6 < 0x80000000) {
    *param_2 = lVar5;
    uVar6 = uVar6 & 0xffffffff;
  }
  else {
    FUN_0051f420();
    uVar10 = 0xf3;
LAB_0049e50f:
    FUN_0051f540("../crypto/asn1/a_d2i_fp.c",uVar10,"asn1_d2i_read_bio");
    FUN_0051f8f0(0xd,0x9b,0);
LAB_0049e380:
    FUN_0051f1a0();
    FUN_004c4ff0(lVar5);
    uVar6 = 0xffffffff;
  }
  goto LAB_0049e179;
LAB_0049e410:
  do {
    iVar1 = FUN_004ab770(param_1,*(long *)(lVar5 + 8) + uVar8,uVar13 & 0xffffffff);
    if (iVar1 < 1) {
      FUN_0051f420();
      uVar10 = 0xd8;
      goto LAB_0049e361;
    }
    uVar8 = uVar8 + (long)iVar1;
    uVar13 = uVar13 - (long)iVar1;
  } while (uVar13 != 0);
  uVar13 = local_78 * 2;
  if (0x3ffffffe < local_78) {
    uVar13 = local_78;
  }
  uVar11 = uVar11 - uVar9;
  local_78 = uVar13;
  goto joined_r0x0049e3d2;
}

