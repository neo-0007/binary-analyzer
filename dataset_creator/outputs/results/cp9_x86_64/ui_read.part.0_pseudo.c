
ulong ui_read_part_0(UI *param_1,UI_STRING *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  UI_METHOD *pUVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined1 auStack_438 [1032];
  long local_30;
  
  uVar2 = ui_method_data_index;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pUVar6 = UI_get_method(param_1);
  puVar7 = (undefined8 *)UI_method_get_ex_data(pUVar6,uVar2);
  iVar3 = UI_get_result_maxsize(param_2);
  pcVar1 = (code *)*puVar7;
  pvVar8 = UI_get0_user_data(param_1);
  iVar4 = 0x400;
  if (iVar3 < 0x401) {
    iVar4 = iVar3;
  }
  uVar9 = (*pcVar1)(auStack_438,iVar4,*(undefined4 *)(puVar7 + 1),pvVar8);
  if (-1 < (int)uVar9) {
    auStack_438[(int)uVar9] = 0;
    uVar5 = UI_set_result_ex(param_1,param_2,auStack_438,uVar9 & 0xffffffff);
    uVar9 = (ulong)(~uVar5 >> 0x1f);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

