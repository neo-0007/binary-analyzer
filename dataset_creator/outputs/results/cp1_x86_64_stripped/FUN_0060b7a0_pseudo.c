
long FUN_0060b7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  iVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  lVar6 = FUN_0060ae90();
  if (lVar6 != 0) {
LAB_0060b95e:
    iVar5 = FUN_00436480(param_3);
    if (iVar5 <= iVar9) goto LAB_0060ba90;
    lVar8 = FUN_004364a0(param_3,iVar9);
    iVar5 = FUN_0059d800(*(undefined8 *)(lVar8 + 8),&DAT_0081b0c9);
    if (iVar5 != 0) {
      iVar5 = FUN_0059d800(*(undefined8 *)(lVar8 + 8),&DAT_0081b0cc);
      if (iVar5 == 0) {
        iVar5 = 1;
        goto LAB_0060b7f0;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_asid.c",0x218,"v2i_ASIdentifiers");
      uVar10 = 0x73;
LAB_0060b9f3:
      lVar7 = 0;
      FUN_0051f8f0(0x22,uVar10,0);
      FUN_0051ef40(4,"name=",*(undefined8 *)(lVar8 + 8),", value=",*(undefined8 *)(lVar8 + 0x10));
      goto LAB_0060ba24;
    }
LAB_0060b7f0:
    lVar7 = *(long *)(lVar8 + 0x10);
    iVar2 = thunk_FUN_00712780(lVar7,"inherit");
    if (iVar2 == 0) {
      iVar5 = FUN_0060aed0(lVar6,iVar5);
      if (iVar5 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_asid.c",0x223,"v2i_ASIdentifiers");
        uVar10 = 0xa5;
        goto LAB_0060b9f3;
      }
    }
    else {
      iVar2 = thunk_FUN_00712c40(lVar7,&DAT_00821d21);
      pcVar1 = (char *)(lVar7 + iVar2);
      if (*pcVar1 != '\0') {
        iVar3 = thunk_FUN_00712c40(pcVar1,&DAT_00806cb5);
        if (*(char *)(lVar7 + (iVar3 + iVar2)) == '-') {
          iVar3 = iVar3 + iVar2 + 1;
          iVar4 = thunk_FUN_00712c40(iVar3 + lVar7);
          iVar3 = iVar3 + iVar4;
          iVar4 = thunk_FUN_00712c40(lVar7 + iVar3,&DAT_00821d21);
          if (*(char *)(lVar7 + (iVar3 + iVar4)) != '\0') {
            FUN_0051f420();
            FUN_0051f540("../crypto/x509/v3_asid.c",0x23a,"v2i_ASIdentifiers");
            uVar10 = 0xa3;
            goto LAB_0060b9f3;
          }
          lVar8 = FUN_0041c2c0(lVar7,"../crypto/x509/v3_asid.c",0x249);
          if (lVar8 == 0) {
            FUN_0051f420();
            uVar10 = 0x24b;
            goto LAB_0060bb60;
          }
          *(undefined1 *)(lVar8 + iVar2) = 0;
          local_48 = FUN_0059d060(0,lVar8);
          lVar7 = FUN_0059d060(0,iVar3 + lVar8);
          FUN_0041ad60(lVar8,"../crypto/x509/v3_asid.c",0x251);
          if ((local_48 == 0) || (lVar7 == 0)) {
            FUN_0051f420();
            uVar10 = 0x253;
            goto LAB_0060babc;
          }
          iVar2 = FUN_0049f320(local_48,lVar7);
          if (iVar2 < 1) goto LAB_0060b937;
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/v3_asid.c",599,"v2i_ASIdentifiers");
          FUN_0051f8f0(0x22,0x74,0);
          goto LAB_0060ba24;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_asid.c",0x232,"v2i_ASIdentifiers");
        uVar10 = 0xa2;
        goto LAB_0060b9f3;
      }
      iVar2 = FUN_0059d4a0(lVar8,&local_48);
      if (iVar2 == 0) {
        FUN_0051f420();
        uVar10 = 0x245;
LAB_0060bb60:
        FUN_0051f540("../crypto/x509/v3_asid.c",uVar10,"v2i_ASIdentifiers");
        lVar7 = 0;
        FUN_0051f8f0(0x22,0xc0100,0);
        goto LAB_0060ba24;
      }
      lVar7 = 0;
LAB_0060b937:
      iVar5 = FUN_0060af70(lVar6,iVar5,local_48,lVar7);
      if (iVar5 == 0) {
        FUN_0051f420();
        uVar10 = 0x25c;
LAB_0060babc:
        FUN_0051f540("../crypto/x509/v3_asid.c",uVar10,"v2i_ASIdentifiers");
        FUN_0051f8f0(0x22,0xc0100,0);
        goto LAB_0060ba24;
      }
      local_48 = 0;
    }
    iVar9 = iVar9 + 1;
    goto LAB_0060b95e;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/v3_asid.c",0x208,"v2i_ASIdentifiers");
  FUN_0051f8f0(0x22,0xc0100,0);
  goto LAB_0060ba41;
LAB_0060ba90:
  iVar9 = FUN_0060b760(lVar6);
  if (iVar9 == 0) {
    lVar7 = 0;
LAB_0060ba24:
    FUN_0060aeb0(lVar6);
    thunk_FUN_004a2270(local_48);
    thunk_FUN_004a2270(lVar7);
    lVar6 = 0;
  }
LAB_0060ba41:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

