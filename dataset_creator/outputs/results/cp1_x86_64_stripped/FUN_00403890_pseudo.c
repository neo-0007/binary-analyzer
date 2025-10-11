
void FUN_00403890(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_006231b0(0x10);
  uVar2 = FUN_006e2820(param_1);
                    /* try { // try from 004038b6 to 004038ba has its CatchHandler @ 004038d1 */
  FUN_00635810(uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00624060(uVar1,&PTR_PTR_00934018,FUN_0062be50);
}

