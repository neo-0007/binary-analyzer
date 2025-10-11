
void FUN_00670280(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x28); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
                    /* try { // try from 006702a9 to 006702ab has its CatchHandler @ 006702b9 */
    (*(code *)puVar1[1])(param_2,param_1,*(undefined4 *)(puVar1 + 2));
  }
  return;
}

