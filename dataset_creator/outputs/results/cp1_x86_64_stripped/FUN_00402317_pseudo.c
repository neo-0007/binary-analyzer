
void FUN_00402317(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *unaff_RBX;
  
  if (param_3 == 1) {
    plVar1 = (long *)FUN_006c2e40();
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* try { // try from 0040234d to 00402369 has its CatchHandler @ 0040238d */
    FUN_006fdea0("  what():  ",1,0xb,*unaff_RBX);
    FUN_006fdb20(uVar2,*unaff_RBX);
    FUN_007022c0(10,*unaff_RBX);
    FUN_006c2eb0();
  }
  else {
    FUN_006c2e40();
    FUN_006c2eb0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00404713();
}

