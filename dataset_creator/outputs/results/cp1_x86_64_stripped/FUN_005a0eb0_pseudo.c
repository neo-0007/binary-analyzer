
undefined1 * FUN_005a0eb0(undefined8 *param_1,undefined1 *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  bool bVar18;
  long local_d8;
  int local_b8;
  int local_b4;
  int local_a8 [4];
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (undefined1 *)0x0) {
    local_d8 = FUN_004c4f60();
    if ((local_d8 == 0) || (lVar11 = FUN_004c5070(local_d8,200), lVar11 == 0)) {
LAB_005a131e:
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x509_obj.c",0xb7,"X509_NAME_oneline");
      FUN_0051f8f0(0xb,0xc0100,0);
LAB_005a129b:
      param_2 = (undefined1 *)0x0;
      FUN_004c4ff0(local_d8);
      goto LAB_005a12a8;
    }
    **(undefined1 **)(local_d8 + 8) = 0;
    if (param_1 == (undefined8 *)0x0) {
      lVar11 = 199;
      param_2 = *(undefined1 **)(local_d8 + 8);
      FUN_0041ad60(local_d8,"../crypto/x509/x509_obj.c",0x37);
      lVar10 = 200;
      goto LAB_005a1361;
    }
    local_b4 = 200;
  }
  else {
    if (param_3 == 0) {
      param_2 = (undefined1 *)0x0;
      goto LAB_005a12a8;
    }
    local_d8 = 0;
    local_b4 = param_3;
    if (param_1 == (undefined8 *)0x0) {
      lVar10 = (long)param_3;
      lVar11 = lVar10 + -1;
LAB_005a1361:
      thunk_FUN_00712b50(param_2,"NO X509_NAME",lVar10);
      param_2[lVar11] = 0;
      goto LAB_005a12a8;
    }
  }
  local_b8 = -1;
  lVar11 = 0;
  for (iVar16 = 0; iVar6 = FUN_00436480(*param_1), iVar16 < iVar6; iVar16 = iVar16 + 1) {
    puVar7 = (undefined8 *)FUN_004364a0(*param_1,iVar16);
    iVar6 = FUN_00423da0(*puVar7);
    if ((iVar6 == 0) || (puVar8 = (undefined1 *)FUN_00423b00(iVar6), puVar8 == (undefined1 *)0x0)) {
      FUN_004a0440(local_98,0x50,*puVar7);
      puVar8 = local_98;
    }
    iVar6 = thunk_FUN_007129d0(puVar8);
    puVar4 = (uint *)puVar7[1];
    uVar3 = *puVar4;
    if (0x100000 < (int)uVar3) {
      FUN_0051f420();
      uVar15 = 0x4c;
LAB_005a127c:
      FUN_0051f540("../crypto/x509/x509_obj.c",uVar15,"X509_NAME_oneline");
      FUN_0051f8f0(0xb,0x86,0);
      goto LAB_005a129b;
    }
    lVar10 = *(long *)(puVar4 + 2);
    if ((puVar4[1] == 0x1b) && ((uVar3 & 3) == 0)) {
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_a8[2] = 0;
      local_a8[3] = 0;
      uVar15 = local_a8._8_8_;
      local_a8[2] = 0;
      if (0 < (int)uVar3) {
        uVar12 = 0;
        local_a8._8_8_ = uVar15;
        do {
          if (*(char *)(lVar10 + uVar12) != '\0') {
            local_a8[(uint)uVar12 & 3] = 1;
          }
          bVar18 = uVar3 - 1 != uVar12;
          uVar12 = uVar12 + 1;
        } while (bVar18);
        if ((local_a8[0] != 0 || local_a8[1] != 0) || local_a8[2] != 0) goto LAB_005a0fb5;
      }
      local_a8[3] = 1;
      if (0 < (int)uVar3) goto LAB_005a0fd2;
LAB_005a1218:
      iVar17 = 0;
    }
    else {
LAB_005a0fb5:
      local_a8[0] = 1;
      local_a8[1] = 1;
      local_a8[2] = 1;
      local_a8[3] = 1;
      if ((int)uVar3 < 1) goto LAB_005a1218;
LAB_005a0fd2:
      lVar9 = 0;
      iVar17 = 0;
      do {
        while (local_a8[(uint)lVar9 & 3] == 0) {
LAB_005a0fe3:
          lVar9 = lVar9 + 1;
          if ((int)uVar3 == lVar9) goto LAB_005a1024;
        }
        bVar1 = *(byte *)(lVar10 + lVar9);
        if ((bVar1 & 0xfb) == 0x2b) {
          iVar17 = iVar17 + 2;
          goto LAB_005a0fe3;
        }
        iVar14 = iVar17 + 1;
        iVar17 = iVar17 + 4;
        if ((byte)(bVar1 - 0x20) < 0x5f) {
          iVar17 = iVar14;
        }
        lVar9 = lVar9 + 1;
      } while ((int)uVar3 != lVar9);
    }
LAB_005a1024:
    iVar17 = iVar17 + 2 + iVar6 + (int)lVar11;
    if (0x100000 < iVar17) {
      FUN_0051f420();
      uVar15 = 0x7a;
      goto LAB_005a127c;
    }
    if (local_d8 == 0) {
      puVar5 = param_2;
      if (local_b4 <= iVar17) goto LAB_005a12f7;
    }
    else {
      lVar10 = FUN_004c5070(local_d8,(long)(iVar17 + 1));
      if (lVar10 == 0) goto LAB_005a131e;
      puVar5 = *(undefined1 **)(local_d8 + 8);
    }
    puVar5[lVar11] = (*(int *)(puVar7 + 2) != local_b8) * '\x04' + '+';
    lVar11 = thunk_FUN_00713a50(puVar5 + lVar11 + 1,puVar8,iVar6);
    *(undefined1 *)(lVar11 + iVar6) = 0x3d;
    pbVar13 = (undefined1 *)(lVar11 + iVar6) + 1;
    lVar11 = *(long *)(puVar7[1] + 8);
    if (0 < (int)uVar3) {
      lVar10 = 0;
      do {
        while (local_a8[(uint)lVar10 & 3] == 0) {
LAB_005a1100:
          lVar10 = lVar10 + 1;
          if ((int)uVar3 == lVar10) goto LAB_005a114f;
        }
        bVar1 = *(byte *)(lVar11 + lVar10);
        if (0x5e < bVar1 - 0x20) {
          bVar2 = "0123456789ABCDEF"[bVar1 & 0xf];
          pbVar13[0] = 0x5c;
          pbVar13[1] = 0x78;
          bVar1 = "0123456789ABCDEF"[(int)(uint)bVar1 >> 4];
          pbVar13[3] = bVar2;
          pbVar13[2] = bVar1;
          pbVar13 = pbVar13 + 4;
          goto LAB_005a1100;
        }
        if ((bVar1 & 0xfb) == 0x2b) {
          *pbVar13 = 0x5c;
          pbVar13 = pbVar13 + 1;
        }
        lVar10 = lVar10 + 1;
        *pbVar13 = bVar1;
        pbVar13 = pbVar13 + 1;
      } while ((int)uVar3 != lVar10);
    }
LAB_005a114f:
    *pbVar13 = 0;
    local_b8 = *(int *)(puVar7 + 2);
    lVar11 = (long)iVar17;
  }
  if (local_d8 != 0) {
    param_2 = *(undefined1 **)(local_d8 + 8);
    FUN_0041ad60(local_d8,"../crypto/x509/x509_obj.c",0xb0);
  }
LAB_005a12f7:
  if (iVar16 == 0) {
    *param_2 = 0;
  }
LAB_005a12a8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_2;
}

