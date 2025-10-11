
/* WARNING: Removing unreachable block (ram,0x0068c508) */
/* WARNING: Removing unreachable block (ram,0x0068c530) */
/* WARNING: Removing unreachable block (ram,0x0068c514) */
/* WARNING: Removing unreachable block (ram,0x0068c51d) */
/* WARNING: Removing unreachable block (ram,0x0068c521) */

undefined1  [16]
FUN_0068c410(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
            undefined8 param_5,char param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
            )

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == '\0') {
    auVar1 = FUN_0068b590(param_1,param_2,param_3,param_4,param_5,param_7,param_8);
  }
  else {
                    /* try { // try from 0068c467 to 0068c4fe has its CatchHandler @ 0068c541 */
    auVar1 = FUN_0068a710(param_1,param_2,param_3,param_4,param_5,param_7,param_8);
  }
  local_48 = FUN_006256a0();
  FUN_006c4430(&DAT_009452b8,param_9,param_8,&local_48);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  auVar1._8_8_ = param_3 & 0xffffffff00000000 | auVar1._8_8_ & 0xffffffff;
  return auVar1;
}

