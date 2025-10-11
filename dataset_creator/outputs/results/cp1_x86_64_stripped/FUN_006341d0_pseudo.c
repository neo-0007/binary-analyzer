
/* WARNING: Instruction at (ram,0x0081e063) overlaps instruction at (ram,0x0081e062)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_006341d0(long *param_1,undefined8 param_2,int *param_3,long param_4)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  byte in_stack_00000018;
  
  uVar2 = in_stack_00000018 - 100 & 0xff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0063425a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x00634272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))();
    return;
  case 9:
                    /* WARNING: Could not recover jumptable at 0x00634242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x0063422a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  case 0x13:
                    /* WARNING: Could not recover jumptable at 0x00634212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))();
    return;
  case 0x16:
    break;
  }
  bVar1 = (byte)((long)&switchD_006341f8::caseD_16 + (long)(int)(&switchD_006341f8::caseD_16)[uVar2]
                ) & 0x62;
  if (param_4 == 1 ||
      ((long)&switchD_006341f8::caseD_16 + (long)(int)(&switchD_006341f8::caseD_16)[uVar2] & 0x62U)
      != 0) {
    bVar3 = bVar1 == 0x62;
  }
  else {
    *param_3 = *param_3 + 1;
    bVar3 = *param_3 == 0;
  }
  if (param_4 != 2 && bVar3) {
    *param_3 = *param_3 + 1;
    bVar3 = *param_3 == 0;
  }
  else {
    bVar3 = bVar1 == 0x62;
  }
  if (param_4 != 3 && bVar3) {
    *param_3 = *param_3 + 1;
    bVar3 = *param_3 == 0;
  }
  else {
    bVar3 = bVar1 == 0x62;
  }
  if (param_4 != 4 && bVar3) {
    *param_3 = *param_3 + 1;
    bVar3 = *param_3 == 0;
  }
  else {
    bVar3 = bVar1 == 0x62;
  }
  if (param_4 != 5 && bVar3) {
    *param_3 = *param_3 + 1;
    bVar3 = *param_3 == 0;
  }
  else {
    bVar3 = bVar1 == 0x62;
  }
  if (param_4 != 6 && bVar3) {
    *param_3 = *param_3 + 1;
    bVar3 = *param_3 == 0;
  }
  else {
    bVar3 = bVar1 == 0x62;
  }
  if (param_4 != 7 && bVar3) {
    *param_3 = *param_3 + 1;
    bVar3 = *param_3 == 0;
  }
  else {
    bVar3 = bVar1 == 0x62;
  }
  if (param_4 != 8 && bVar3) {
    *param_3 = *param_3 + 1;
    bVar3 = *param_3 == 0;
  }
  else {
    bVar3 = bVar1 == 0x62;
  }
  if (param_4 != 9 && bVar3) {
    *param_3 = *param_3 + -1;
    bVar3 = *param_3 == 0;
  }
  else {
    bVar1 = 0x62;
    bVar3 = false;
  }
  if (param_4 != 10 && bVar3) {
    *param_3 = *param_3 + 1;
    bVar3 = *param_3 == 0;
  }
  else {
    bVar3 = bVar1 == 0x62;
  }
  if (param_4 != 0xb && bVar3) {
    *param_3 = *param_3 + 1;
    bVar3 = *param_3 == 0;
  }
  else {
    bVar3 = bVar1 == 0x62;
  }
  if (param_4 != 0xc && bVar3) {
    *param_3 = *param_3 + 1;
    bVar3 = *param_3 == 0;
  }
  else {
    bVar3 = bVar1 == 0x62;
  }
  if (param_4 != 0xd && bVar3) {
    *param_3 = *param_3 + 1;
    bVar3 = *param_3 == 0;
  }
  else {
    bVar3 = bVar1 == 0x62;
  }
  if (param_4 != 0xe && bVar3) {
    *param_3 = *param_3 + 1;
    bVar3 = *param_3 == 0;
  }
  else {
    bVar3 = bVar1 == 0x62;
  }
  if (param_4 != 0xf && bVar3) {
    *param_3 = *param_3 + 1;
    bVar3 = *param_3 == 0;
  }
  else {
    bVar3 = bVar1 == 0x62;
  }
  if (param_4 == 0x10 || !bVar3) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

