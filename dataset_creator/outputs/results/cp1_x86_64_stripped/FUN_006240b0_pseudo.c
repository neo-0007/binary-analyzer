
void FUN_006240b0(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  puVar2 = (undefined8 *)FUN_006c2fb0();
  puVar1 = (ulong *)*puVar2;
  *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  if (puVar1 != (ulong *)0x0) {
    puVar3 = (ulong *)(puVar1[10] + 0xb8b1aabcbcd4d500);
    if (puVar3 < (ulong *)0x2) {
      puVar3 = (ulong *)*puVar1;
      *(int *)(puVar1 + 5) = -(int)puVar1[5];
      if ((puVar1[10] & 1) == 0) {
        puVar3 = puVar1 + 0xe;
      }
    }
    else {
      *puVar2 = 0;
    }
    FUN_006cd7a0(puVar1 + 10,param_2,puVar3);
    FUN_006c2e40(puVar1 + 10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00623f30();
}

