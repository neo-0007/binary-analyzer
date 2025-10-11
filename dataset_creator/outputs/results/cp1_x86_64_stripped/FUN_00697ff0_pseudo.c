
void FUN_00697ff0(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  puVar1 = param_1 + 0x10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00670010(puVar1);
  *param_1 = &DAT_00938320;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x10] = &DAT_00938348;
  param_1[1] = 0;
                    /* try { // try from 0069808d to 00698091 has its CatchHandler @ 00698248 */
  FUN_0066f450(puVar1,0);
  param_1[2] = &DAT_009382d0;
  param_1[0x10] = &DAT_009382f8;
                    /* try { // try from 006980ad to 006980b1 has its CatchHandler @ 00698239 */
  FUN_0066f450(puVar1,0);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_00938438;
  param_1[2] = &PTR_FUN_00938460;
  param_1[0x10] = &PTR_FUN_00938488;
  param_1[7] = 0;
  param_1[3] = &PTR_FUN_009388a8;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_006274c0(param_1 + 10);
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 0xb) = 0;
  puVar3 = (undefined1 *)*param_2;
  param_1[3] = &PTR_FUN_009380c8;
  puVar4 = param_1 + 0xe;
  param_1[0xc] = puVar4;
  if ((puVar3 + uVar2 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_M_construct null not valid");
  }
  local_48 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 0xe) = *puVar3;
      goto LAB_0069817f;
    }
    if (uVar2 == 0) goto LAB_0069817f;
  }
  else {
                    /* try { // try from 006981eb to 00698224 has its CatchHandler @ 00698230 */
    puVar4 = (undefined8 *)FUN_0069de90(param_1 + 0xc,&local_48,0);
    param_1[0xc] = puVar4;
    param_1[0xe] = local_48;
  }
  thunk_FUN_00713a50(puVar4,puVar3,uVar2);
  puVar4 = (undefined8 *)param_1[0xc];
LAB_0069817f:
  param_1[0xd] = local_48;
  uVar5 = 0;
  *(undefined1 *)((long)puVar4 + local_48) = 0;
  *(uint *)(param_1 + 0xb) = param_3;
  if ((param_3 & 3) != 0) {
    uVar5 = param_1[0xd];
  }
                    /* try { // try from 006981a1 to 006981a5 has its CatchHandler @ 0069823f */
  FUN_00694640(param_1 + 3,param_1[0xc],0,uVar5);
                    /* try { // try from 006981ac to 006981b0 has its CatchHandler @ 00698251 */
  FUN_0066f450(puVar1,param_1 + 3);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

