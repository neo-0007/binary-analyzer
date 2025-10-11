
long * FUN_00690750(long *param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18);
  *puVar1 = *puVar1 & ~param_2;
  return param_1;
}

