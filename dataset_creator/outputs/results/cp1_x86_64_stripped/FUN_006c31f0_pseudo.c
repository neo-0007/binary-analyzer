
void FUN_006c31f0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = 1;
  if (param_1 != 0) {
    lVar2 = param_1;
  }
  while( true ) {
    lVar3 = FUN_007101b0(lVar2);
    if (lVar3 != 0) {
      return;
    }
    pcVar4 = (code *)FUN_006c31e0();
    if (pcVar4 == (code *)0x0) break;
    (*pcVar4)();
  }
  puVar1 = (undefined8 *)FUN_006231b0(8);
  *puVar1 = &PTR_FUN_00939350;
                    /* WARNING: Subroutine does not return */
  FUN_00624060(puVar1,&PTR_PTR_00939328,FUN_006b87e0);
}

