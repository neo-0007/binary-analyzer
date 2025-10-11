
undefined8 FUN_004b1400(int *param_1)

{
  LOCK();
  *param_1 = *param_1 + 1;
  UNLOCK();
  return 1;
}

