class Media:
    def __init__(self, name):
        self.name = name
    
    def display_info(self):
        print(f"Media Name: {self.name}")


class Movie(Media):
    def __init__(self, name, genre, rating):
        super().__init__(name)
        self.genre = genre
        self.rating = rating

    def display_info(self):
        super().display_info()
        print(f"Genre: {self.genre}")
        print(f"Rating: {self.rating}/10")

    def recommend(self, genre=None, min_rating=None):
        if genre and min_rating:
            if self.genre.lower() == genre.lower() and self.rating >= min_rating:
                print(f"Recommended Movie: {self.name}")
            else:
                print(f"{self.name} does not meet the criteria for recommendation.")
        elif genre:
            if self.genre.lower() == genre.lower():
                print(f"Recommended Movie: {self.name}")
            else:
                print(f"{self.name} does not meet the genre criteria.")
        elif min_rating:
            if self.rating >= min_rating:
                print(f"Recommended Movie: {self.name}")
            else:
                print(f"{self.name} does not meet the rating criteria.")
        else:
            print(f"Recommended Movie: {self.name}")


def get_movie_details():
    name = input("Enter the movie name: ")
    genre = input("Enter the genre of the movie: ")
    rating = float(input("Enter the rating of the movie (0-10): "))
    return name, genre, rating


def get_recommendation_criteria():
    genre = input("Enter preferred genre for recommendation (or leave empty for any): ")
    min_rating = input("Enter minimum rating for recommendation (or leave empty for any): ")
    min_rating = float(min_rating) if min_rating else None
    return genre, min_rating


def display_menu():
    print("\n=== Movie Recommendation System ===")
    print("1. Add Movie")
    print("2. List All Movies")
    print("3. Recommend Movie Based on Genre and Rating")
    print("4. Exit")


def main():
    movies = []

    while True:
        display_menu()
        choice = input("Enter your choice: ")

        if choice == "1":
            movie_name, movie_genre, movie_rating = get_movie_details()
            movie = Movie(movie_name, movie_genre, movie_rating)
            movies.append(movie)
            print(f"Movie '{movie_name}' added successfully!")

        elif choice == "2":
            if movies:
                print("\n=== All Movies ===")
                for movie in movies:
                    movie.display_info()
                    print("-" * 30)
            else:
                print("No movies to display.")

        elif choice == "3":
            if movies:
                genre_criteria, min_rating_criteria = get_recommendation_criteria()
                print("\n=== Movie Recommendations ===")
                for movie in movies:
                    movie.recommend(genre=genre_criteria, min_rating=min_rating_criteria)
                    print("-" * 30)
            else:
                print("No movies to recommend.")

        elif choice == "4":

            print("Exiting the system. Goodbye!")
            break

        else:
            print("Invalid choice. Please try again.")


if __name__ == "__main__":
    main()
