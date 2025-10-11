
void FUN_006f073d(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint in_EAX;
  undefined8 *puVar1;
  long unaff_RBP;
  char in_R10B;
  
  *(undefined8 *)(unaff_RBP + -0x538) = param_1;
  if (in_R10B != '\0') {
    *(uint *)(unaff_RBP + -0x540) = param_4;
    in_EAX = param_4;
  }
  if (in_EAX < 0x30) {
    puVar1 = (undefined8 *)((ulong)in_EAX + *(long *)(unaff_RBP + -0x530));
    *(uint *)(unaff_RBP + -0x540) = in_EAX + 8;
  }
  else {
    puVar1 = *(undefined8 **)(unaff_RBP + -0x538);
    *(undefined8 **)(unaff_RBP + -0x538) = puVar1 + 1;
  }
  *(undefined8 *)(unaff_RBP + -0x670) = *puVar1;
  FUN_006ee571();
  return;
}

