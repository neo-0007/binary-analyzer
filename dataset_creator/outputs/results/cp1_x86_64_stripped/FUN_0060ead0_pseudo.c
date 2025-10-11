
long FUN_0060ead0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined1 local_98 [88];
  long local_40;
  
  iVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = param_3;
  do {
    iVar2 = FUN_00436480(param_2);
    if (iVar2 <= iVar8) {
      if (param_3 == 0 && lVar6 == 0) {
        lVar6 = FUN_00436410();
      }
LAB_0060ec03:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return lVar6;
    }
    puVar3 = (undefined8 *)FUN_004364a0(param_2,iVar8);
    lVar4 = FUN_00611ef0(param_1,puVar3[1],lVar6);
    lVar7 = lVar6;
    if (lVar4 == 0) {
LAB_0060ec3c:
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_info.c",0x5e,"i2v_AUTHORITY_INFO_ACCESS");
      FUN_0051f8f0(0x22,0xc0100,0);
      if ((param_3 == 0) && (lVar7 != 0)) {
        lVar6 = 0;
        FUN_00436430(lVar7,FUN_0059cb40);
      }
      else {
        lVar6 = 0;
      }
      goto LAB_0060ec03;
    }
    lVar6 = FUN_004364a0(lVar4,iVar8);
    FUN_004a0440(local_98,0x50,*puVar3);
    iVar2 = thunk_FUN_007129d0(local_98);
    iVar1 = thunk_FUN_007129d0(*(undefined8 *)(lVar6 + 8));
    lVar9 = (long)(iVar2 + 4 + iVar1);
    lVar5 = FUN_0041ad90(lVar9,"../crypto/x509/v3_info.c",0x52);
    lVar7 = lVar4;
    if (lVar5 == 0) goto LAB_0060ec3c;
    iVar8 = iVar8 + 1;
    FUN_004aeb30(lVar5,lVar9,"%s - %s",local_98,*(undefined8 *)(lVar6 + 8));
    FUN_0041ad60(*(undefined8 *)(lVar6 + 8),"../crypto/x509/v3_info.c",0x56);
    *(long *)(lVar6 + 8) = lVar5;
    lVar6 = lVar4;
  } while( true );
}

