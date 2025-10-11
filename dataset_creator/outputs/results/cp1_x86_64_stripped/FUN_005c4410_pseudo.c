
undefined8
FUN_005c4410(undefined8 param_1,int param_2,int param_3,long param_4,long param_5,undefined8 param_6
            ,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ushort *puVar10;
  ushort uVar11;
  undefined8 uVar12;
  ushort *puVar13;
  ushort *puVar14;
  int local_a0;
  ulong local_90;
  ulong local_78;
  int local_58;
  
  if (param_2 < 0x801) {
    local_a0 = 0x40;
    if (param_2 < 2) {
      FUN_0051f420();
      uVar12 = 0x87;
      goto LAB_005c4bea;
    }
  }
  else {
    local_a0 = 0x80;
  }
  if ((((param_4 != 0) || (param_3 == 0)) || (5 < param_2)) || (param_2 == 3)) {
    lVar4 = FUN_0041aec0(0x1000,"../crypto/bn/bn_prime.c",0x93);
    if (lVar4 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bn/bn_prime.c",0x95,"BN_generate_prime_ex2");
      FUN_0051f8f0(3,0xc0100,0);
      return 0;
    }
    FUN_004b2c00(param_7);
    lVar5 = FUN_004b2df0(param_7);
    if (lVar5 == 0) {
LAB_005c4798:
      uVar12 = 0;
LAB_005c479b:
      FUN_0041ad60(lVar4,"../crypto/bn/bn_prime.c",0xce);
      FUN_004b2d50(param_7);
      return uVar12;
    }
    local_58 = 0;
    do {
      iVar3 = local_58;
      if (param_4 == 0) {
        if (param_2 < 0x201) {
          local_78 = 0xfffffffffffffec8;
          iVar2 = 0x40;
        }
        else if (param_2 < 0x401) {
          local_78 = 0xfffffffffffffd30;
          iVar2 = 0x80;
        }
        else if (param_2 < 0x801) {
          local_78 = 0xfffffffffffff59e;
          iVar2 = 0x180;
        }
        else {
          local_78 = 0xffffffffffffe01e;
          if (0x1000 < param_2) {
            local_78 = 0xffffffffffffba38;
          }
          iVar2 = 0x800;
          if (param_2 < 0x1001) {
            iVar2 = 0x400;
          }
        }
LAB_005c4a45:
        iVar1 = FUN_004bb500(param_1,param_2,1,1,0,param_7);
        if ((iVar1 != 0) && ((param_3 == 0 || (iVar1 = FUN_004b8360(param_1,1), iVar1 != 0)))) {
          puVar13 = &DAT_00814b04;
          uVar11 = 3;
          puVar10 = (ushort *)(lVar4 + 2);
          while( true ) {
            lVar6 = FUN_004bca90(param_1,uVar11);
            if (lVar6 == -1) goto LAB_005c4798;
            *puVar10 = (ushort)lVar6;
            puVar10 = puVar10 + 1;
            if (puVar13 == &DAT_00814b04 + (iVar2 - 2)) break;
            uVar11 = *puVar13;
            puVar13 = puVar13 + 1;
          }
          uVar7 = 0;
LAB_005c4ad8:
          puVar13 = &DAT_00814b04;
          uVar11 = 3;
          puVar10 = (ushort *)(lVar4 + 2);
          do {
            uVar9 = (ulong)uVar11;
            if ((uVar7 < 0x80000000 && param_2 < 0x20) &&
               (lVar6 = FUN_004b77c0(), lVar6 + uVar7 < uVar9 * uVar9)) {
LAB_005c4b9d:
              iVar1 = FUN_004bcc70();
              if (iVar1 == 0) break;
              iVar1 = FUN_004b7bb0(param_1);
              if (param_2 == iVar1) goto LAB_005c4829;
              goto LAB_005c4a45;
            }
            uVar9 = (*puVar10 + uVar7) % uVar9;
            if (param_3 == 0) {
              if (uVar9 == 0) goto LAB_005c4b46;
            }
            else if (uVar9 < 2) goto LAB_005c4b46;
            puVar10 = puVar10 + 1;
            if (&DAT_00814b04 + (iVar2 - 2) == puVar13) goto LAB_005c4b9d;
            uVar11 = *puVar13;
            puVar13 = puVar13 + 1;
          } while( true );
        }
        goto LAB_005c4798;
      }
      if (param_2 < 0x201) {
        local_90 = 0xfffffffffffffec8;
        iVar2 = 0x40;
      }
      else if (param_2 < 0x401) {
        local_90 = 0xfffffffffffffd30;
        iVar2 = 0x80;
      }
      else if (param_2 < 0x801) {
        local_90 = 0xfffffffffffff59e;
        iVar2 = 0x180;
      }
      else {
        local_90 = 0xffffffffffffe01e;
        if (0x1000 < param_2) {
          local_90 = 0xffffffffffffba38;
        }
        iVar2 = 0x800;
        if (param_2 < 0x1001) {
          iVar2 = 0x400;
        }
      }
      FUN_004b2c00(param_7);
      lVar6 = FUN_004b2df0(param_7);
      if (lVar6 == 0) {
LAB_005c4908:
        FUN_004b2d50(param_7);
        goto LAB_005c4798;
      }
      uVar7 = FUN_004b77c0(param_4);
      if (CARRY8(uVar7,local_90)) {
        local_90 = FUN_004b77c0(param_4);
        local_90 = ~local_90;
      }
LAB_005c45c5:
      iVar1 = FUN_004bb470(param_1,param_2,0,1,0,param_7);
      if (((iVar1 == 0) || (iVar1 = FUN_004b34a0(0,lVar6,param_1,param_4), iVar1 == 0)) ||
         (iVar1 = FUN_004b18d0(param_1,param_1,lVar6), iVar1 == 0)) goto LAB_005c4908;
      if (param_5 == 0) {
        iVar1 = FUN_004bcc70(param_1,(-(ulong)(param_3 == 0) & 0xfffffffffffffffe) + 3);
      }
      else {
        iVar1 = FUN_004b1810(param_1,param_1,param_5);
      }
      if ((iVar1 == 0) ||
         (((iVar1 = FUN_004b7bb0(param_1), iVar1 < param_2 ||
           (uVar7 = FUN_004b77c0(param_1), uVar7 < (-(ulong)(param_3 == 0) & 0xfffffffffffffffe) + 5
           )) && (iVar1 = FUN_004b1810(param_1,param_1,param_4), iVar1 == 0)))) goto LAB_005c4908;
      uVar11 = 3;
      puVar13 = &DAT_00814b04;
      puVar10 = (ushort *)(lVar4 + 2);
      while( true ) {
        lVar8 = FUN_004bca90(param_1,uVar11);
        if (lVar8 == -1) goto LAB_005c4908;
        *puVar10 = (ushort)lVar8;
        puVar10 = puVar10 + 1;
        if (&DAT_00814b04 + (iVar2 - 2) == puVar13) break;
        uVar11 = *puVar13;
        puVar13 = puVar13 + 1;
      }
      uVar7 = 0;
LAB_005c46dc:
      uVar11 = 3;
      puVar10 = &DAT_00814b04;
      puVar14 = (ushort *)(lVar4 + 2);
      while ((uVar9 = (ulong)uVar11, 0x7fffffff < uVar7 || 0x1f < param_2 ||
             (lVar8 = FUN_004b77c0(), uVar9 * uVar9 <= lVar8 + uVar7))) {
        uVar9 = (*puVar14 + uVar7) % uVar9;
        if (param_3 == 0) {
          if (uVar9 == 0) goto LAB_005c474d;
        }
        else if (uVar9 < 2) goto LAB_005c474d;
        puVar14 = puVar14 + 1;
        if (puVar10 == puVar13) break;
        uVar11 = *puVar10;
        puVar10 = puVar10 + 1;
      }
      iVar2 = FUN_004bcc70(param_1,uVar7);
      if (iVar2 == 0) goto LAB_005c4908;
      FUN_004b2d50(param_7);
LAB_005c4829:
      local_58 = iVar3 + 1;
      iVar2 = FUN_005c3bd0(param_6,0);
      if (iVar2 == 0) goto LAB_005c4798;
      if (param_3 == 0) {
        iVar3 = FUN_005c41f0(param_1,local_a0,param_7,0);
        if (iVar3 == -1) goto LAB_005c4798;
        if (iVar3 != 0) {
LAB_005c49ad:
          uVar12 = 1;
          goto LAB_005c479b;
        }
      }
      else {
        iVar2 = FUN_004bbff0(lVar5,param_1);
        if (iVar2 == 0) goto LAB_005c4798;
        iVar2 = 0;
        while( true ) {
          iVar1 = FUN_005c41f0(param_1,1,param_7,0);
          if (iVar1 == -1) goto LAB_005c4798;
          if (iVar1 == 0) break;
          iVar1 = FUN_005c41f0(lVar5,1,param_7,0);
          if (iVar1 == -1) goto LAB_005c4798;
          if (iVar1 == 0) break;
          iVar1 = FUN_005c3bd0(param_6,2,iVar3);
          if (iVar1 == 0) goto LAB_005c4798;
          iVar2 = iVar2 + 1;
          if (iVar2 == local_a0) goto LAB_005c49ad;
        }
      }
    } while( true );
  }
  FUN_0051f420();
  uVar12 = 0x8f;
LAB_005c4bea:
  FUN_0051f540("../crypto/bn/bn_prime.c",uVar12,"BN_generate_prime_ex2");
  FUN_0051f8f0(3,0x76,0);
  return 0;
LAB_005c4b46:
  uVar7 = uVar7 + (-(ulong)(param_3 == 0) & 0xfffffffffffffffe) + 4;
  if (local_78 < uVar7) goto LAB_005c4a45;
  goto LAB_005c4ad8;
LAB_005c474d:
  lVar8 = FUN_004b77c0(param_4);
  uVar7 = uVar7 + lVar8;
  if (local_90 < uVar7) goto LAB_005c45c5;
  goto LAB_005c46dc;
}

