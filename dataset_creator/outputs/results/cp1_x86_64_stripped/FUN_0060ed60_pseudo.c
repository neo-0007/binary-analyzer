
long FUN_0060ed60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  int iVar8;
  long in_FS_OFFSET;
  undefined1 local_58 [8];
  long local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00436480(param_3);
  lVar2 = FUN_004363b0(0,iVar1);
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_info.c",0x72,"v2i_AUTHORITY_INFO_ACCESS");
    FUN_0051f8f0(0x22,0xc0100,0);
  }
  else if (0 < iVar1) {
    iVar8 = 0;
    do {
      lVar5 = FUN_004364a0(param_3,iVar8);
      plVar6 = (long *)FUN_0060ed40();
      if (plVar6 == (long *)0x0) {
        FUN_0051f420();
        uVar7 = 0x78;
LAB_0060eebb:
        FUN_0051f540("../crypto/x509/v3_info.c",uVar7,"v2i_AUTHORITY_INFO_ACCESS");
        FUN_0051f8f0(0x22,0xc0100,0);
LAB_0060eed3:
        FUN_00436430(lVar2,&LAB_0060ecc0);
        lVar2 = 0;
        break;
      }
      FUN_00435f80(lVar2,plVar6);
      lVar3 = thunk_FUN_00712710(*(undefined8 *)(lVar5 + 8),0x3b);
      if (lVar3 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_info.c",0x7e,"v2i_AUTHORITY_INFO_ACCESS");
        FUN_0051f8f0(0x22,0x8f,0);
        goto LAB_0060eed3;
      }
      local_50 = lVar3 + 1;
      local_48 = *(undefined8 *)(lVar5 + 0x10);
      lVar4 = FUN_00612c40(plVar6[1],param_1,param_2,local_58,0);
      if (lVar4 == 0) goto LAB_0060eed3;
      lVar5 = FUN_0041c400(*(long *)(lVar5 + 8),lVar3 - *(long *)(lVar5 + 8),
                           "../crypto/x509/v3_info.c",0x85);
      if (lVar5 == 0) {
        FUN_0051f420();
        uVar7 = 0x86;
        goto LAB_0060eebb;
      }
      lVar3 = FUN_00424530(lVar5,0);
      *plVar6 = lVar3;
      if (lVar3 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_info.c",0x8b,"v2i_AUTHORITY_INFO_ACCESS");
        FUN_0051f8f0(0x22,0x77,"value=%s",lVar5);
        FUN_0041ad60(lVar5,"../crypto/x509/v3_info.c",0x8d);
        goto LAB_0060eed3;
      }
      iVar8 = iVar8 + 1;
      FUN_0041ad60(lVar5,"../crypto/x509/v3_info.c",0x90);
    } while (iVar1 != iVar8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

