
long * FUN_0061c650(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  int iVar9;
  long in_FS_OFFSET;
  bool bVar10;
  byte local_5a;
  byte local_59;
  long local_58;
  long *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00436480(param_3);
  local_50 = (long *)FUN_0060a140();
  if (local_50 == (long *)0x0) {
LAB_0061c929:
    lVar6 = 0;
    puVar7 = (undefined4 *)0x0;
    lVar4 = 0;
    lVar8 = 0;
    local_58 = 0;
  }
  else {
    if (iVar1 == 1) {
      lVar4 = FUN_004364a0(param_3,0);
      iVar9 = thunk_FUN_00712780(*(undefined8 *)(lVar4 + 8),&DAT_007dcef8);
      if (iVar9 == 0) goto LAB_0061c8c6;
LAB_0061c6b0:
      local_59 = 0;
      iVar9 = 0;
      local_5a = 0;
      do {
        while( true ) {
          lVar4 = FUN_004364a0(param_3,iVar9);
          uVar5 = *(undefined8 *)(lVar4 + 8);
          iVar2 = thunk_FUN_00712780(uVar5,"keyid");
          if (iVar2 != 0) break;
          local_5a = 1;
          if (*(long *)(lVar4 + 0x10) != 0) {
            iVar2 = thunk_FUN_00712780(*(long *)(lVar4 + 0x10),"always");
            local_5a = (iVar2 == 0) + 1;
          }
LAB_0061c6f4:
          iVar9 = iVar9 + 1;
          if (iVar1 <= iVar9) goto LAB_0061c761;
        }
        iVar2 = thunk_FUN_00712780(uVar5,"issuer");
        if (iVar2 != 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/v3_akid.c",0x83,"v2i_AUTHORITY_KEYID");
          FUN_0051f8f0(0x22,0x78,"name=%s",*(undefined8 *)(lVar4 + 8));
          goto LAB_0061c929;
        }
        local_59 = 1;
        if (*(long *)(lVar4 + 0x10) == 0) goto LAB_0061c6f4;
        iVar2 = thunk_FUN_00712780(*(long *)(lVar4 + 0x10),"always");
        local_59 = (iVar2 == 0) + 1;
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar1);
    }
    else {
      if (0 < iVar1) goto LAB_0061c6b0;
      local_59 = 0;
      local_5a = 0;
    }
LAB_0061c761:
    if (param_2 == (byte *)0x0) {
      FUN_0051f420();
      lVar6 = 0;
      puVar7 = (undefined4 *)0x0;
      lVar4 = 0;
      lVar8 = 0;
      FUN_0051f540("../crypto/x509/v3_akid.c",0x8d,"v2i_AUTHORITY_KEYID");
      FUN_0051f8f0(0x22,0xc0102,0);
      local_58 = 0;
    }
    else {
      if ((*param_2 & 1) != 0) goto LAB_0061c8c6;
      lVar4 = *(long *)(param_2 + 8);
      if (lVar4 == 0) {
        FUN_0051f420();
        lVar6 = 0;
        puVar7 = (undefined4 *)0x0;
        lVar8 = 0;
        FUN_0051f540("../crypto/x509/v3_akid.c",0x91,"v2i_AUTHORITY_KEYID");
        FUN_0051f8f0(0x22,0x79,0);
        local_58 = 0;
        lVar4 = 0;
        goto LAB_0061c93d;
      }
      lVar6 = *(long *)(param_2 + 0x10);
      bVar10 = lVar6 == lVar4;
      FUN_0051f000();
      uVar3 = (uint)bVar10;
      if (*(long *)(param_2 + 0x38) != 0) {
        uVar3 = FUN_0059efc0(*(undefined8 *)(param_2 + 0x10));
      }
      FUN_0051f050();
      if ((local_5a != 2) && ((uVar3 != 0 || ((local_5a & 1) == 0)))) {
LAB_0061c9f8:
        lVar8 = 0;
LAB_0061c819:
        if ((local_59 == 2) || ((lVar8 == 0 && ((local_59 & 1) != 0)))) goto LAB_0061c833;
LAB_0061ca4c:
        lVar6 = 0;
        lVar4 = 0;
LAB_0061c8b6:
        local_50[1] = lVar4;
        local_50[2] = lVar6;
        *local_50 = lVar8;
        goto LAB_0061c8c6;
      }
      lVar8 = 0;
      iVar1 = FUN_0059f520(lVar4,0x52,0xffffffff);
      if ((-1 < iVar1) && (lVar8 = FUN_0059f550(lVar4,iVar1), lVar8 != 0)) {
        if ((lVar6 != lVar4) || (uVar3 != 0)) {
          lVar8 = FUN_0060f430(lVar8);
          bVar10 = bVar10 && lVar8 == 0;
          goto LAB_0061c7fa;
        }
LAB_0061c9a5:
        if (*(long *)(param_2 + 0x38) != 0) {
          local_48 = 0;
          lVar8 = 0;
          iVar1 = FUN_005ae4f0(&local_48);
          if (iVar1 != 0) {
            lVar8 = FUN_006133c0(local_48);
          }
          FUN_005ae290(local_48);
          goto LAB_0061c803;
        }
        if ((local_5a != 2) && (local_59 != 0)) goto LAB_0061c9f8;
LAB_0061cae2:
        lVar8 = 0;
LAB_0061cae4:
        FUN_0051f420();
        lVar6 = 0;
        puVar7 = (undefined4 *)0x0;
        lVar4 = 0;
        FUN_0051f540("../crypto/x509/v3_akid.c",0xb1,"v2i_AUTHORITY_KEYID");
        FUN_0051f8f0(0x22,0x7b,0);
        local_58 = 0;
        goto LAB_0061c93d;
      }
LAB_0061c7fa:
      if (bVar10) goto LAB_0061c9a5;
LAB_0061c803:
      if ((local_5a != 2) && (local_59 != 0)) goto LAB_0061c819;
      if (lVar8 == 0) goto LAB_0061cae2;
      iVar1 = FUN_004a23b0(lVar8);
      if (iVar1 < 3) goto LAB_0061cae4;
      if (local_59 != 2) goto LAB_0061ca4c;
LAB_0061c833:
      uVar5 = FUN_0059e6c0(lVar4);
      local_58 = FUN_005ad800(uVar5);
      uVar5 = FUN_0059e6f0(lVar4);
      lVar6 = thunk_FUN_004a22a0(uVar5);
      if ((local_58 == 0) || (lVar6 == 0)) {
        FUN_0051f420();
        puVar7 = (undefined4 *)0x0;
        lVar4 = 0;
        FUN_0051f540("../crypto/x509/v3_akid.c",0xba,"v2i_AUTHORITY_KEYID");
        FUN_0051f8f0(0x22,0x7a,0);
        goto LAB_0061c93d;
      }
      lVar4 = FUN_00436410();
      if ((lVar4 == 0) || (puVar7 = (undefined4 *)FUN_0060e6d0(), puVar7 == (undefined4 *)0x0)) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        iVar1 = FUN_00435f80(lVar4,puVar7);
        if (iVar1 != 0) {
          *puVar7 = 4;
          *(long *)(puVar7 + 2) = local_58;
          goto LAB_0061c8b6;
        }
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_akid.c",0xc3,"v2i_AUTHORITY_KEYID");
      FUN_0051f8f0(0x22,0xc0100,0);
    }
  }
LAB_0061c93d:
  FUN_004360b0(lVar4);
  FUN_0060e6f0(puVar7);
  FUN_005ad580(local_58);
  thunk_FUN_004a2270(lVar6);
  thunk_FUN_004a2270(lVar8);
  FUN_0060a160(local_50);
  local_50 = (long *)0x0;
LAB_0061c8c6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_50;
}

