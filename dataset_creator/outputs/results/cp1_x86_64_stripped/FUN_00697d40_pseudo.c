
void FUN_00697d40(long *param_1,long *param_2,undefined8 *param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  lVar6 = param_2[3];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_2[2];
  lVar2 = *(long *)(lVar1 + -0x18);
  *param_1 = lVar1;
  *(long *)((long)param_1 + lVar2) = lVar6;
  param_1[1] = 0;
  FUN_0066f450(*(long *)(lVar1 + -0x18) + (long)param_1,0);
  lVar6 = param_2[4];
  param_1[2] = lVar6;
  plVar5 = (long *)((long)param_1 + *(long *)(lVar6 + -0x18) + 0x10);
  *plVar5 = param_2[5];
                    /* try { // try from 00697daf to 00697db3 has its CatchHandler @ 00697f69 */
  FUN_0066f450(plVar5,0);
  lVar6 = param_2[1];
  lVar1 = param_2[6];
  *param_1 = lVar6;
  *(long *)((long)param_1 + *(long *)(lVar6 + -0x18)) = lVar1;
  param_1[2] = param_2[7];
  lVar6 = *param_2;
  lVar1 = param_2[8];
  *param_1 = lVar6;
  *(long *)((long)param_1 + *(long *)(lVar6 + -0x18)) = lVar1;
  lVar6 = param_2[9];
  param_1[4] = 0;
  param_1[2] = lVar6;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = (long)&PTR_FUN_009388a8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_006274c0(param_1 + 10);
  uVar3 = param_3[1];
  *(undefined4 *)(param_1 + 0xb) = 0;
  puVar4 = (undefined1 *)*param_3;
  param_1[3] = (long)&PTR_FUN_009380c8;
  plVar5 = param_1 + 0xe;
  param_1[0xc] = (long)plVar5;
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_M_construct null not valid");
  }
  local_48 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 0xe) = *puVar4;
      goto LAB_00697e9d;
    }
    if (uVar3 == 0) goto LAB_00697e9d;
  }
  else {
                    /* try { // try from 00697f1b to 00697f54 has its CatchHandler @ 00697f60 */
    plVar5 = (long *)FUN_0069de90(param_1 + 0xc,&local_48,0);
    param_1[0xc] = (long)plVar5;
    param_1[0xe] = local_48;
  }
  thunk_FUN_00713a50(plVar5,puVar4,uVar3);
  plVar5 = (long *)param_1[0xc];
LAB_00697e9d:
  param_1[0xd] = local_48;
  lVar6 = 0;
  *(undefined1 *)((long)plVar5 + local_48) = 0;
  *(uint *)(param_1 + 0xb) = param_4;
  if ((param_4 & 3) != 0) {
    lVar6 = param_1[0xd];
  }
                    /* try { // try from 00697ebf to 00697ec3 has its CatchHandler @ 00697fd0 */
  FUN_00694640(param_1 + 3,param_1[0xc],0,lVar6);
                    /* try { // try from 00697ed2 to 00697ed6 has its CatchHandler @ 00697fd9 */
  FUN_0066f450(*(long *)(*param_1 + -0x18) + (long)param_1,param_1 + 3);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

