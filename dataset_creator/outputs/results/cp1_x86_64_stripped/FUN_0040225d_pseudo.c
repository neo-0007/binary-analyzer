
void FUN_0040225d(void)

{
  char cVar1;
  long *plVar2;
  undefined8 *puVar3;
  int unaff_EBP;
  
  FUN_006c2e40();
  plVar2 = (long *)FUN_006c2f90();
  puVar3 = (undefined8 *)*plVar2;
  if ((*(byte *)(puVar3 + 10) & 1) == 0) {
    puVar3 = puVar3 + 0xe;
  }
  else {
    puVar3 = (undefined8 *)*puVar3;
  }
                    /* try { // try from 0040227e to 004022e0 has its CatchHandler @ 004022e7 */
  FUN_006237c0(0);
  cVar1 = FUN_006236c0(&stack0x00000000,puVar3[-0xe],puVar3,(long)unaff_EBP);
  if (cVar1 == '\0') {
    cVar1 = FUN_006236c0(&stack0x00000000,&PTR_PTR_00933a28,0,(long)unaff_EBP);
    if (cVar1 != '\0') {
      puVar3 = (undefined8 *)FUN_006231b0(8);
      *puVar3 = &PTR_FUN_00933a98;
                    /* WARNING: Subroutine does not return */
      FUN_00624060(puVar3,&PTR_PTR_00933a28,FUN_00623310);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00623ed0();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00402300 to 00402304 has its CatchHandler @ 004022e7 */
  FUN_006240b0();
}

