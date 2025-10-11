
undefined4 FUN_005a2e20(int param_1,long *param_2,long param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  long in_FS_OFFSET;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  undefined1 *local_d0;
  uint local_c4;
  undefined1 *local_c0;
  uint local_a0;
  uint local_94;
  undefined1 *local_90;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 0;
  uVar11 = (-(uint)(param_4 == 0) & 5) + 5;
  local_d8 = uVar11 & 3;
  if (param_4 < param_1) {
    local_d8 = uVar11;
  }
  if (-1 < *(int *)((long)param_2 + 0x2c)) {
    local_d8 = local_d8 & 0xfffffffc;
  }
  if (((local_d8 & *(uint *)(param_2 + 5)) == 0) || (iVar5 = FUN_00436480(param_2[1]), iVar5 < 1)) {
    uVar12 = 0;
    local_d0 = (undefined1 *)0x0;
  }
  else {
    local_a0 = 0;
    iVar13 = 0;
    uVar11 = 0x100;
    local_c0 = (undefined1 *)0x0;
    local_dc = 0x100;
    local_c4 = 0x100;
    local_d4 = 0x100;
    local_d0 = (undefined1 *)0x0;
    do {
      while( true ) {
        pbVar7 = (byte *)FUN_004364a0(param_2[1],iVar13);
        bVar1 = *pbVar7;
        if ((local_d8 >> (bVar1 & 0x1f) & 1) != 0) break;
LAB_005a3061:
        iVar13 = iVar13 + 1;
        if (iVar5 == iVar13) goto LAB_005a3070;
      }
      if (bVar1 != uVar11) {
        local_dc = 0x100;
        local_c4 = (uint)*(byte *)(*(long *)(*param_2 + 8) + (ulong)pbVar7[2]);
      }
      bVar2 = pbVar7[1];
      uVar11 = (uint)bVar1;
      if (bVar2 != local_d4) {
        FUN_0041ad60(local_d0,"../crypto/x509/x509_vfy.c",0xad1);
        local_90 = (undefined1 *)0x0;
        if (bVar2 == 0) {
          local_a0 = FUN_005b0140(param_3,&local_90);
          local_d0 = local_90;
        }
        else {
          if (bVar2 != 1) {
            FUN_0051f420();
            FUN_0051f540("../crypto/x509/x509_vfy.c",0xa75,"dane_i2d");
            FUN_0051f8f0(0xb,0x85,0);
            uVar12 = 0xffffffff;
            goto LAB_005a2eb6;
          }
          uVar9 = FUN_005a1bb0(param_3);
          local_a0 = FUN_005ae240(uVar9,&local_90);
          local_d0 = local_90;
        }
        local_90 = local_d0;
        if (((int)local_a0 < 0) || (local_d0 == (undefined1 *)0x0)) {
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/x509_vfy.c",0xa7a,"dane_i2d");
          FUN_0051f8f0(0xb,0xc0100,0);
          uVar12 = 0xffffffff;
          goto LAB_005a2eb6;
        }
        plVar10 = (long *)*param_2;
        uVar8 = (ulong)pbVar7[2];
        local_c4 = (uint)*(byte *)(plVar10[1] + uVar8);
        local_dc = (uint)pbVar7[2];
        local_d4 = (uint)bVar2;
LAB_005a30d3:
        lVar3 = *(long *)(*plVar10 + uVar8 * 8);
        local_94 = local_a0;
        if (lVar3 == 0) {
          uVar8 = (ulong)local_a0;
          local_c0 = local_d0;
        }
        else {
          local_c0 = local_88;
          iVar6 = FUN_00407440(local_d0,local_a0,local_c0,&local_94,lVar3,0);
          if (iVar6 == 0) {
            uVar12 = 0xffffffff;
            goto LAB_005a2e9a;
          }
          uVar8 = (ulong)local_94;
        }
LAB_005a3042:
        if ((uVar8 != *(ulong *)(pbVar7 + 0x10)) ||
           (iVar6 = thunk_FUN_00713570(local_c0,*(undefined8 *)(pbVar7 + 8)), iVar6 != 0))
        goto LAB_005a3061;
        uVar12 = 0;
        if ((0xcU >> (uVar11 & 0x1f) & 1) == 0) {
          uVar4 = 0;
          if (-1 < *(int *)((long)param_2 + 0x2c)) goto LAB_005a2e9a;
        }
        else {
          uVar4 = 1;
        }
        uVar12 = uVar4;
        param_2[3] = (long)pbVar7;
        *(int *)((long)param_2 + 0x2c) = param_4;
        FUN_0041ad60(param_2[4],"../crypto/x509/x509_vfy.c",0xb06);
        param_2[4] = param_3;
        FUN_005a1b20(param_3);
        goto LAB_005a2e9a;
      }
      bVar1 = pbVar7[2];
      uVar8 = (ulong)bVar1;
      if ((bVar1 == 0) || (local_c4 <= *(byte *)(*(long *)(*param_2 + 8) + (ulong)bVar1))) {
        if (bVar1 != local_dc) {
          plVar10 = (long *)*param_2;
          local_dc = (uint)bVar1;
          goto LAB_005a30d3;
        }
        uVar8 = (ulong)local_94;
        goto LAB_005a3042;
      }
      iVar13 = iVar13 + 1;
    } while (iVar5 != iVar13);
LAB_005a3070:
    uVar12 = 0;
  }
LAB_005a2e9a:
  FUN_0041ad60(local_d0,"../crypto/x509/x509_vfy.c",0xb0f);
LAB_005a2eb6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

