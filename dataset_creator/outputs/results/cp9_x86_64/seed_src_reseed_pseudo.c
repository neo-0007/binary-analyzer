
int seed_src_reseed(long param_1)

{
  if (*(int *)(param_1 + 8) == 1) {
    return *(int *)(param_1 + 8);
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/rands/seed_src.c",0x85,"seed_src_reseed");
  ERR_set_error(0x39,(*(int *)(param_1 + 8) != 2) + 0xc0,0);
  return 0;
}

