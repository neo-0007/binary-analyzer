
int FUN_0047b320(long param_1)

{
  if (*(int *)(param_1 + 8) == 1) {
    return *(int *)(param_1 + 8);
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/rands/seed_src.c",0x85,"seed_src_reseed");
  FUN_0051f8f0(0x39,(*(int *)(param_1 + 8) != 2) + 0xc0,0);
  return 0;
}

