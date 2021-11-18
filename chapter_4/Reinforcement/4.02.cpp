// Give a pseudo-code description of the O(n)-time algorithm for computing the power function p(x, n). 
// Also, draw the recursion trace of this algorithm for the computation of p(2,5).
//


// ==================== Algorithm =====================
// step 1: initialize temp variable
// step 2: loop n times
//      step 2.1: multiply temp with x.
// step 3: return final x.
// step 4: END
//
//
//
//




// Recursion Trace of p(2, 5)
//
//
//                  p(2, 5)                                                                                                 returns 1 * 2 * 2 * 2 * 2* 2
//                      |
//                      |
//                      -------p(2, 4)                                                                                      returns 1 * 2 * 2 * 2 * 2
//                                 |
//                                 |
//                                 ---------p(2, 3)                                                                         returns 1 * 2 * 2 * 2
//                                              |
//                                              |
//                                              ----------p(2, 2)                                                           returns 1 * 2 * 2
//                                                          |
//                                                          |
//                                                          ----------p(2, 1)                                               returns 1 * 2
//                                                                      |
//                                                                      |
//                                                                      -------------p(2, 0) = 1                            returns 1
