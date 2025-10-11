
void FUN_0061fdd0(int *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined1 local_58 [24];
  long local_40;
  
  iVar2 = (int)param_3;
  iVar6 = iVar2 + 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    FUN_004ae9e0(param_2,"%*sSigned Certificate Timestamp:",param_3,&DAT_0083e5c2);
    FUN_004ae9e0(param_2,"\n%*sVersion   : ",iVar6,&DAT_0083e5c2);
    if (*param_1 != 0) goto LAB_00620090;
    FUN_004ae9e0(param_2,"v1 (0x0)");
  }
  else {
    lVar4 = FUN_00622930(param_4,*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 8));
    FUN_004ae9e0(param_2,"%*sSigned Certificate Timestamp:",param_3 & 0xffffffff,&DAT_0083e5c2);
    FUN_004ae9e0(param_2,"\n%*sVersion   : ",iVar6,&DAT_0083e5c2);
    if (*param_1 != 0) {
LAB_00620090:
      FUN_004ae9e0(param_2,"unknown\n%*s",iVar2 + 0x10,&DAT_0083e5c2);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00620170;
      uVar5 = *(undefined8 *)(param_1 + 2);
      iVar6 = param_1[4];
      goto LAB_00620069;
    }
    FUN_004ae9e0(param_2,"v1 (0x0)");
    if (lVar4 != 0) {
      uVar5 = FUN_006228f0(lVar4);
      FUN_004ae9e0(param_2,"\n%*sLog       : %s",iVar6,&DAT_0083e5c2,uVar5);
    }
  }
  FUN_004ae9e0(param_2,"\n%*sLog ID    : ",iVar6,&DAT_0083e5c2);
  FUN_004aae30(param_2,iVar2 + 0x10,0x10,*(undefined8 *)(param_1 + 6),param_1[8]);
  FUN_004ae9e0(param_2,"\n%*sTimestamp : ",iVar6,&DAT_0083e5c2);
  uVar1 = *(ulong *)(param_1 + 10);
  lVar4 = FUN_004a7c10();
  if (lVar4 != 0) {
    FUN_005b4580(lVar4,0,uVar1 / 86400000 & 0xffffffff,(uVar1 % 86400000) / 1000);
    uVar5 = FUN_004a23e0(lVar4);
    FUN_004aeb30(local_58,0x14,"%.14s.%03dZ",uVar5,(int)uVar1 + (int)(uVar1 / 1000) * -1000);
    iVar3 = FUN_005b44f0(lVar4,local_58);
    if (iVar3 != 0) {
      FUN_005b4630(param_2,lVar4);
    }
    thunk_FUN_004a2270(lVar4);
  }
  FUN_004ae9e0(param_2,"\n%*sExtensions: ",iVar6,&DAT_0083e5c2);
  if (*(long *)(param_1 + 0xe) == 0) {
    FUN_004ae9e0(param_2,&DAT_007dcef8);
  }
  else {
    FUN_004aae30(param_2,iVar2 + 0x10,0x10,*(undefined8 *)(param_1 + 0xc));
  }
  FUN_004ae9e0(param_2,"\n%*sSignature : ",iVar6,&DAT_0083e5c2);
  iVar3 = FUN_00620880(param_1);
  if (iVar3 == 0) {
    FUN_004ae9e0(param_2,&DAT_0081d191,(char)param_1[0x10],*(undefined1 *)((long)param_1 + 0x41));
  }
  else {
    uVar5 = FUN_00423c40(iVar3);
    FUN_004ae9e0(param_2,&DAT_007e3d61,uVar5);
  }
  FUN_004ae9e0(param_2,&DAT_0081d19a,iVar6,&DAT_0083e5c2);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00620170:
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x12);
  iVar6 = param_1[0x14];
LAB_00620069:
  FUN_004aae30(param_2,iVar2 + 0x10,0x10,uVar5,iVar6);
  return;
}

