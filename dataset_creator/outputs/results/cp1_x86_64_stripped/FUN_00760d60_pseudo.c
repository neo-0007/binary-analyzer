
undefined8 FUN_00760d60(undefined8 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  long in_FS_OFFSET;
  ushort local_3a;
  ushort local_38;
  ushort local_36;
  int local_34;
  long local_30;
  
  pcVar7 = (char *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *pcVar7;
  iVar2 = (int)cVar1;
  if (param_2 == 0) {
    uVar6 = 0;
    if (cVar1 == '\0') goto LAB_00760e6f;
    if ((iVar2 - 0x2bU & 0xfd) == 0) goto LAB_00760daa;
    if (9 < iVar2 - 0x30U) goto LAB_00760e6f;
    iVar8 = -1;
    local_38 = 0;
    local_36 = 0;
    local_34 = 0;
    iVar2 = FUN_006f4d00(pcVar7,"%hu%n:%hu%n:%hu%n",&local_3a,&local_34,&local_38,&local_34,
                         &local_36,&local_34);
    if (0 < iVar2) goto LAB_00760e0c;
LAB_00760f70:
    DAT_0094aa78 = 0;
    uVar6 = 0;
    goto LAB_00760e6f;
  }
  if ((iVar2 - 0x2bU & 0xfd) == 0) {
LAB_00760daa:
    pcVar7 = pcVar7 + 1;
    local_34 = 0;
    local_36 = 0;
    *param_1 = pcVar7;
    iVar8 = ((cVar1 == '-') - 1) + (uint)(cVar1 == '-');
    local_38 = 0;
    iVar2 = FUN_006f4d00(pcVar7,"%hu%n:%hu%n:%hu%n",&local_3a,&local_34,&local_38,&local_34,
                         &local_36,&local_34);
    if (0 < iVar2) goto LAB_00760e0c;
    if (param_2 == 0) goto LAB_00760f70;
LAB_00760ef7:
    DAT_0094aaa8 = DAT_0094aa78 + 0xe10;
  }
  else {
    local_38 = 0;
    iVar8 = -1;
    local_36 = 0;
    local_34 = 0;
    iVar2 = FUN_006f4d00(pcVar7,"%hu%n:%hu%n:%hu%n",&local_3a,&local_34,&local_38,&local_34,
                         &local_36,&local_34);
    if (iVar2 < 1) goto LAB_00760ef7;
LAB_00760e0c:
    uVar3 = (uint)local_38;
    if (0x3b < uVar3) {
      uVar3 = 0x3b;
    }
    uVar4 = (uint)local_3a;
    if (0x18 < uVar4) {
      uVar4 = 0x18;
    }
    uVar5 = (uint)local_36;
    if (0x3b < uVar5) {
      uVar5 = 0x3b;
    }
    (&DAT_0094aa78)[(long)param_2 * 0xc] = (uVar3 * 0x3c + uVar4 * 0xe10 + uVar5) * iVar8;
  }
  uVar6 = 1;
  *param_1 = pcVar7 + local_34;
LAB_00760e6f:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

