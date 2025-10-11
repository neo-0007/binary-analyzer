
long * FUN_006c6b40(long *param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5,
                   long *param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long *plVar6;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  plVar6 = param_1 + 2;
  lVar2 = param_6[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 < 0) || (lVar2 == 0)) {
    *param_1 = (long)plVar6;
    FUN_006c69b0(param_1,*param_6,lVar2 + *param_6);
    goto LAB_006c6b8d;
  }
  uVar1 = FUN_006c47a0();
  lVar2 = FUN_006c4700(uVar1,param_3);
  if (lVar2 == 0) {
    *param_1 = (long)plVar6;
    FUN_006c69b0(param_1,*param_6,param_6[1] + *param_6);
    goto LAB_006c6b8d;
  }
  uVar1 = *(undefined8 *)(lVar2 + 8);
  lVar2 = *param_6;
  uVar3 = FUN_006e1eb0(*(undefined8 *)(param_2 + 0x10));
  puVar4 = (undefined1 *)FUN_006e2810(uVar1,lVar2);
  FUN_006e1eb0(uVar3);
  *param_1 = (long)plVar6;
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_M_construct null not valid");
  }
  uVar5 = thunk_FUN_007129d0(puVar4);
  local_48 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(param_1 + 2) = *puVar4;
    }
    else if (uVar5 != 0) goto LAB_006c6c8d;
  }
  else {
    plVar6 = (long *)FUN_0069de90(param_1,&local_48,0);
    *param_1 = (long)plVar6;
    param_1[2] = local_48;
LAB_006c6c8d:
    thunk_FUN_00713a50(plVar6,puVar4,uVar5);
    plVar6 = (long *)*param_1;
  }
  param_1[1] = local_48;
  *(undefined1 *)((long)plVar6 + local_48) = 0;
LAB_006c6b8d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}

