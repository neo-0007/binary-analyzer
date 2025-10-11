
void __pthread_cleanup_combined_routine_voidptr(undefined8 *param_1)

{
  if (*(int *)(param_1 + 2) != 0) {
    (*(code *)*param_1)(param_1[1]);
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  return;
}

