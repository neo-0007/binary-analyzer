
void __do_global_dtors_aux(void)

{
  if (completed_1 != '\0') {
    return;
  }
  deregister_tm_clones();
  __deregister_frame_info(&fde_00838350);
  completed_1 = 1;
  return;
}

