
ulong FUN_00472e50(undefined8 *param_1,uint param_2,int param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 auStack_78 [72];
  long local_30;
  
  lVar3 = param_1[0xb];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = FUN_0043b840();
  if ((int)uVar2 == 0) goto LAB_00472ec0;
  uVar2 = 1;
  if ((param_2 & 3) == 0) goto LAB_00472ec0;
  if (lVar3 != param_4) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/keymgmt/ecx_kmgmt.c",0x2f6,"ecx_validate");
    FUN_0051f8f0(0x39,0xad,0);
    uVar2 = 0;
    goto LAB_00472ec0;
  }
  if ((param_2 & 2) == 0) {
    if ((param_2 & 1) == 0) goto LAB_00472efb;
LAB_00472ea3:
    lVar3 = param_1[10];
    uVar2 = 0;
    if ((lVar3 == 0) || (uVar2 = 1, (param_2 & 3) != 3)) goto LAB_00472ec0;
  }
  else {
    uVar2 = 0;
    if ((*(byte *)(param_1 + 2) & 1) == 0) goto LAB_00472ec0;
    if ((param_2 & 1) != 0) goto LAB_00472ea3;
LAB_00472efb:
    uVar2 = 1;
    if ((param_2 & 3) != 3) goto LAB_00472ec0;
    lVar3 = param_1[10];
  }
  if (param_3 == 2) {
    iVar1 = FUN_004e6ef0(*param_1,auStack_78,lVar3,param_1[1]);
    if (iVar1 == 0) {
      uVar2 = 0;
      goto LAB_00472ec0;
    }
  }
  else if (param_3 == 3) {
    iVar1 = FUN_004dee70(*param_1,auStack_78,lVar3,param_1[1]);
    if (iVar1 == 0) {
      uVar2 = 0;
      goto LAB_00472ec0;
    }
  }
  else if (param_3 == 1) {
    thunk_FUN_004ddd70(auStack_78);
  }
  else {
    FUN_004e7030();
  }
  iVar1 = FUN_00422820((long)param_1 + 0x11,auStack_78,param_1[0xb]);
  uVar2 = (ulong)(iVar1 == 0);
LAB_00472ec0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

