def look_and_say(n):
    term = "1"
    print(term)  

    for _ in range(1, n):
        next_term = ""
        count = 1

        for j in range(1, len(term) + 1):
            if j < len(term) and term[j] == term[j - 1]:
                count += 1
            else:
                next_term += str(count) + term[j - 1]
                count = 1

        print(next_term)
        term = next_term  

n = int(input("Enter number of terms: "))
look_and_say(n)
