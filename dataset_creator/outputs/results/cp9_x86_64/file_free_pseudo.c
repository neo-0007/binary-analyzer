
undefined8 file_free(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      if ((*(int *)(param_1 + 0x28) != 0) && (*(FILE **)(param_1 + 0x40) != (FILE *)0x0)) {
        fclose(*(FILE **)(param_1 + 0x40));
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    return 1;
  }
  return 0;
}

