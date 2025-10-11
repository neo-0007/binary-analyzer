
void FUN_00624060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_006c2fb0();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  puVar2 = (undefined4 *)FUN_00624010(param_1,param_2,param_3);
  *puVar2 = 1;
  FUN_006cd040(puVar2 + 0x18);
  FUN_006c2e40(puVar2 + 0x18);
                    /* WARNING: Subroutine does not return */
  FUN_00623f30();
}

